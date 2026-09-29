// OoT3D decomp @ 0028cbbc  name=FUN_0028cbbc  size=596

void FUN_0028cbbc(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_fpscr;

  uVar7 = *(undefined4 *)(DAT_0028ce10 + param_2);
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x22c,1,param_1 + 0x230,1,0);
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x22c) + 0xc);
  uVar3 = FUN_00372f0c(uVar2,1);
  FUN_00372d94(uVar5,uVar3);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x230) + 0xc);
  uVar2 = FUN_00372f0c(uVar2,1);
  FUN_00372d94(uVar3,uVar2);
  FUN_00375c10(param_2,0x14);
  uVar2 = DAT_0028ce18;
  *DAT_0028ce14 = param_1;
  *(undefined1 *)(param_1 + 0xb7) = 10;
  FUN_003510b0(param_1,uVar2);
  uVar2 = DAT_0028ce1c;
  FUN_00372d4c(DAT_0028ce1c,DAT_0028ce1c,param_1 + 0xbc,0);
  FUN_0037572c(DAT_0028ce20,param_1);
  FUN_0034fe20(param_1,param_2,param_1 + 0x1a8,0,0,0,0,0);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1d0),4);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1d0),6);
  FUN_00353dd0(param_2,param_1 + 0x378);
  FUN_00353dd0(param_2,param_1 + 0x3d0);
  FUN_00353dd0(param_2);
  FUN_00353dd0(param_2,param_1 + 0x480);
  uVar5 = DAT_0028ce24[1];
  uVar6 = DAT_0028ce24[2];
  uVar3 = DAT_0028ce24[3];
  FUN_00353d24(param_2,param_1 + 0x378,param_1,*DAT_0028ce24);
  FUN_00353d24(param_2,param_1 + 0x3d0,param_1,uVar5);
  FUN_00353d24(param_2,param_1 + 0x428,param_1,uVar6);
  FUN_00353d24(param_2,param_1 + 0x480,param_1,uVar3);
  iVar4 = FUN_0036e864(param_2,0x37);
  if ((iVar4 == 0) ||
     (sVar1 = *(short *)(param_2 + 0x104),
     ((sVar1 != 0x4f && sVar1 != 0x1a) && sVar1 != 0xe) && sVar1 != 0xf)) {
    FUN_00374a58(uVar2,param_1 + 0x1a8,0);
    uVar3 = FUN_0036ae14(param_1 + 0x1a8,0);
    uVar2 = DAT_0028ce28;
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x264) = uVar3;
    *(undefined4 *)(param_1 + 0x238) = uVar2;
    *(undefined4 *)(param_1 + 0x510) = 0;
    *(undefined2 *)(param_1 + 0x514) = 100;
    *(undefined1 *)(param_1 + 0x23c) = 1;
    iVar4 = DAT_0028ce2c;
    *(char *)(DAT_0028ce2c + -0x14b9) = (char)*(undefined2 *)(DAT_0028ce2c + 0x84);
    *(undefined2 *)(iVar4 + -0x14bc) = *(undefined2 *)(iVar4 + -0x14be);
  }
  else {
    FUN_00374428(param_1);
  }
  FUN_0035af04(uVar7,1);
  return;
}
