// OoT3D decomp @ 0040a124  name=FUN_0040a124  size=832

void FUN_0040a124(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined8 uVar4;

  *DAT_0040a464 = 0;
  *DAT_0040a468 = 0;
  iVar2 = FUN_00400ee8();
  if (iVar2 < 0) {
    FUN_0030e3ac(iVar2,&DAT_0040a46c,0,&DAT_0040a46c);
    FUN_002fb928(0);
  }
  iVar2 = FUN_00400f1c();
  if (iVar2 < 0) {
    FUN_0030e3ac(iVar2,&DAT_0040a46c,0,&DAT_0040a46c);
    FUN_002fb928(0);
  }
  FUN_003078b8(param_1 + 0x7448);
  FUN_00409fc0(param_1 + 0x72fc,*(undefined4 *)(param_1 + 0x247c));
  FUN_00348904(*(undefined4 *)(param_1 + 0x247c),*(undefined4 *)(param_1 + 0x743c));
  if (*(int *)(param_1 + 0x7438) != 0) {
    uVar3 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_0040a470 + 0x10))((int *)*DAT_0040a470,uVar3);
  }
  uVar3 = DAT_0040a474;
  *(undefined4 *)(param_1 + 0x7438) = 0;
  FUN_0015f1e4(uVar3);
  uVar3 = extraout_r1;
  if (*(int **)(param_1 + 0x17c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x17c) + 4))();
    uVar3 = extraout_r1_00;
  }
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (*(int *)(param_1 + 0x247c) != 0) {
    FUN_003525d4(*(int *)(param_1 + 0x247c));
    uVar3 = extraout_r1_01;
  }
  *(undefined4 *)(param_1 + 0x247c) = 0;
  if (*(int *)(param_1 + 0x174) != 0) {
    uVar3 = FUN_003fc250();
    (**(code **)(*(int *)*DAT_0040a478 + 0x10))((int *)*DAT_0040a478,uVar3);
    uVar3 = extraout_r1_02;
  }
  *(undefined4 *)(param_1 + 0x174) = 0;
  if (*(int *)(param_1 + 0x178) != 0) {
    (**(code **)(*(int *)*DAT_0040a47c + 0x10))((int *)*DAT_0040a47c,*(int *)(param_1 + 0x178));
    uVar3 = extraout_r1_03;
  }
  puVar1 = DAT_0040a480;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x7440) = 0;
  *(undefined4 *)(param_1 + 0x7444) = 0;
  if (((*puVar1 & 1) == 0) &&
     (uVar4 = FUN_003679b4(DAT_0040a480), uVar3 = (int)((ulonglong)uVar4 >> 0x20), (int)uVar4 != 0))
  {
    FUN_0031ff30(DAT_0040a484);
    uVar3 = DAT_0040a48c;
  }
  FUN_003fb550(DAT_0040a484,uVar3);
  FUN_003f9b24(param_1 + 0x180);
  FUN_003fc2a0(param_1 + 0x22f0);
  FUN_003fcfd8(param_1 + 0x23c8);
  FUN_00307650();
  if (*(undefined4 **)(param_1 + 0x72d4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x72d4))();
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x72d4));
    *(undefined4 *)(param_1 + 0x72d4) = 0;
  }
  FUN_003075c8(param_1 + 0x59a0);
  FUN_00307538(param_1 + 0x4290);
  FUN_0040bcb0(param_1 + 0x3304);
  FUN_0030748c(param_1 + 0x32c0);
  FUN_00307434(param_1 + 0x72d8);
  FUN_00307390();
  FUN_003072f8();
  FUN_003071e0();
  FUN_0040a004();
  FUN_003071d0(param_1 + 0x104);
  FUN_0040a490();
  FUN_00306f90(param_1 + 0x25f0);
  FUN_00306f68(param_1 + 0x7394);
  FUN_00306f04();
  FUN_003fb36c();
  FUN_00400edc();
  FUN_00311284(*(int *)(param_1 + 0x170) + 4);
  if (*(int **)(param_1 + 0x170) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  FUN_0034fc6c(*(undefined4 *)(param_1 + 0x16c));
  *(undefined4 *)(param_1 + 0x16c) = 0;
  FUN_0030fe74(param_1);
  FUN_0031e210(param_1 + 0xa4,*(undefined4 *)(param_1 + 0xa0));
  FUN_00311284(param_1 + 0xa4);
  return;
}
