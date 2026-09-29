// OoT3D decomp @ 001aa9c8  name=FUN_001aa9c8  size=980

void FUN_001aa9c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  switch(*(ushort *)(param_1 + 0x1c) & 0xff) {
  case 4:
    uVar1 = FUN_00353fd4(param_1,param_2,0);
    FUN_00343194(param_1,param_2,0,1,uVar1);
    FUN_00372f38(param_1,param_2,param_1 + 0x2f4,0,0);
    return;
  default:
    FUN_00374428(param_1,param_2,param_3,param_4);
    return;
  case 8:
    uVar1 = FUN_00353fd4(param_1,param_2,1);
    FUN_00343194(param_1,param_2,1,2,uVar1);
    FUN_00372f38(param_1,param_2,param_1 + 0x2f8,1,0);
    return;
  case 9:
    uVar1 = FUN_00353fd4(param_1,param_2,2);
    FUN_00343194(param_1,param_2,2,3,uVar1);
    FUN_00372f38(param_1,param_2,param_1 + 0x2fc,2,0);
    return;
  case 10:
    uVar1 = FUN_00353fd4(param_1,param_2,3);
    FUN_00343194(param_1,param_2,3,4,uVar1);
    FUN_00372f38(param_1,param_2,param_1 + 0x300,3,0);
    return;
  case 0xb:
    uVar1 = FUN_00353fd4(param_1,param_2,4);
    FUN_00343194(param_1,param_2,4,5,uVar1);
    FUN_00372f38(param_1,param_2,param_1 + 0x304,4,0);
    return;
  case 0xc:
    uVar1 = FUN_00353fd4(param_1,param_2,5);
    FUN_00343194(param_1,param_2,5,6,uVar1);
    FUN_00372f38(param_1,param_2,param_1 + 0x308,5,0);
    return;
  case 0xd:
    uVar1 = FUN_00353fd4(param_1,param_2,6);
    FUN_00343194(param_1,param_2,6,7,uVar1);
    FUN_00372f38(param_1,param_2,param_1 + 0x30c,6,0);
    return;
  case 0x10:
    FUN_00343194(param_1,param_2,0xf,0,0);
    FUN_00353dd0(param_2,param_1 + 0x1dc);
    FUN_0034fb3c(param_2,param_1 + 0x1dc,param_1,DAT_001aade8);
    FUN_00353dd0(param_2,param_1 + 0x234);
    FUN_0034fb3c(param_2,param_1 + 0x234,param_1,DAT_001aade8);
    FUN_00353dd0(param_2,param_1 + 0x28c);
    FUN_0034fb3c(param_2,param_1 + 0x28c,param_1,DAT_001aade8);
    FUN_00372f38(param_1,param_2,param_1 + 0x2f8,1,0);
    return;
  case 0x11:
    FUN_00343194(param_1,param_2,0x10,0,0);
    FUN_00353dd0(param_2,param_1 + 0x1dc);
    FUN_0034fb3c(param_2,param_1 + 0x1dc,param_1,DAT_001aadec);
    FUN_00353dd0(param_2,param_1 + 0x234);
    FUN_0034fb3c(param_2,param_1 + 0x234,param_1,DAT_001aadec);
    FUN_00353dd0(param_2,param_1 + 0x28c);
    FUN_0034fb3c(param_2,param_1 + 0x28c,param_1,DAT_001aadec);
    FUN_00372f38(param_1,param_2,param_1 + 0x2fc,2,0);
    return;
  case 0x16:
    FUN_00343194(param_1,param_2,0x11,0,0);
    FUN_00353dd0(param_2,param_1 + 0x1dc);
    FUN_0034fb3c(param_2,param_1 + 0x1dc,param_1,DAT_001aadf0);
    FUN_00372f38(param_1,param_2,param_1 + 0x310,7,0);
    return;
  }
}
