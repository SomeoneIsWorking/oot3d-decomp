// OoT3D decomp @ 0014be68  name=FUN_0014be68  size=328

void FUN_0014be68(int param_1)

{
  int iVar1;

  iVar1 = FUN_00357a70((int)*(short *)(param_1 + 0x1c));
  FUN_00357a50(param_1 + 0x1a4,0,4,iVar1,0);
  FUN_00357a50(param_1 + 0x1a4,1,4,iVar1,0);
  FUN_00357a50(param_1 + 0x1a4,2,3,iVar1 + 0x10,0);
  FUN_00357a50(param_1 + 0x1a4,3,2,iVar1 + 0x20,0);
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),8);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),6);
  }
  else {
    FUN_0037266c();
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),8);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
  }
  if ((*(byte *)(param_1 + 0xe0e) & 1) == 0) {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),0);
  }
  else {
    FUN_0036932c();
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_0014bfb0,param_1,0);
  return;
}
