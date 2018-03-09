/*
 * miner_system_icon.h
 */

#ifndef MINER_SYSTEM_ICON_H_
#define MINER_SYSTEM_ICON_H_

namespace client {

}

namespace datavo {
 class MinerIconDO {
 private:
	 int iconNum;
 public:
	 int  getIconNum();
	 void setIconNum(int icon);
 };

 int MinerIconDO::getIconNum() {
	return this->iconNum;
 }

 void MinerIconDO::setIconNum(int iconNum) {
	this->iconNum = iconNum;
 }
}

namespace command {
  class AddMinerIconCommand {
  public:
	  void doAddIcon  (int iconNum , datavo::MinerIconDO * vo);
	  void reDoAddIcon(int iconNum , datavo::MinerIconDO * vo);
  };

  class ReduceMinerIconCommand {
  public:
	  void doReduceIcon  (int iconNum , datavo::MinerIconDO * vo);
	  void reDoReduceIcon(int iconNum , datavo::MinerIconDO * vo);
  };

  void ReduceMinerIconCommand::doReduceIcon  (int iconNum, datavo::MinerIconDO * vo) {
  	  int sum = vo->getIconNum();
  	  int mid = sum - iconNum;
  	  mid = (mid < 0) ?  0:mid;
  	  vo->setIconNum(mid);
  }

  void ReduceMinerIconCommand::reDoReduceIcon (int iconNum, datavo::MinerIconDO * vo) {
  	  int sum = vo->getIconNum();
  	  vo->setIconNum(sum + iconNum);
  }

  void AddMinerIconCommand::doAddIcon   (int iconNum, datavo::MinerIconDO * vo) {
  	  int sum = vo->getIconNum();
  	  vo->setIconNum(sum + iconNum);
  }

  void AddMinerIconCommand::reDoAddIcon (int iconNum, datavo::MinerIconDO * vo) {
	  int sum = vo->getIconNum();
	  int mid = sum-iconNum;
	  mid = (mid < 0) ?  0:mid;
	  vo->setIconNum(mid);
  }
}

#endif /* MINER_SYSTEM_ICON_H_ */
