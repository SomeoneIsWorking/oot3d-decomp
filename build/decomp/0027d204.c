// OoT3D decomp @ 0027d204  name=FUN_0027d204  size=244

void FUN_0027d204(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 10) {
    uVar2 = *(undefined4 *)(param_1 + 0x1cc);
    uVar3 = 0;
    iVar4 = DAT_0027d2f8;
  }
  else if (sVar1 == 0xb) {
    uVar2 = *(undefined4 *)(param_1 + 0x1cc);
    uVar3 = 1;
    iVar4 = DAT_0027d2f8 + 0x10;
  }
  else if (sVar1 == 0xc) {
    uVar2 = *(undefined4 *)(param_1 + 0x1cc);
    uVar3 = 2;
    iVar4 = DAT_0027d2f8 + 0x20;
  }
  else {
    if (sVar1 != 0xd) goto LAB_0027d29c;
    uVar2 = *(undefined4 *)(param_1 + 0x1cc);
    uVar3 = 3;
    iVar4 = DAT_0027d2f8 + 0x30;
  }
  FUN_0037266c(uVar2,uVar3);
  if (iVar4 != 0) {
    FUN_00357a50(param_1 + 0x1a4,0,4,iVar4,0);
  }
LAB_0027d29c:
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0027d2fc,DAT_0027d300,param_1,0);
  return;
}
