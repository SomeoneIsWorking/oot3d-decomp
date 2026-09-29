// OoT3D decomp @ 0045463c  name=FUN_0045463c  size=180

int FUN_0045463c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];

  *param_1 = DAT_004546f0;
  FUN_0030af40(auStack_10,param_1 + 1);
  if (param_1[4] == 0) {
    FUN_0030aedc(auStack_10);
  }
  else {
    FUN_0030af40(auStack_14,param_1 + 1);
    FUN_002d2d74(param_1 + 4);
    FUN_0030aedc(auStack_14);
    uVar1 = FUN_0030c550();
    uVar2 = FUN_0030c0dc(uVar1,1);
    FUN_0030c074(uVar1,uVar2);
    FUN_00308a78(param_1 + 4);
    FUN_0030aedc(auStack_10);
  }
  param_1[3] = 0xffffffff;
  iVar3 = FUN_00466ca8(param_1 + 4);
  return iVar3 + -0x10;
}
