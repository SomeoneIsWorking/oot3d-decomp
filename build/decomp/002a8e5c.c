// OoT3D decomp @ 002a8e5c  name=FUN_002a8e5c  size=216

void FUN_002a8e5c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 5) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    *(undefined2 *)(param_1 + 0x2a0) = 2;
    if (*(short *)(param_1 + 0x1c) == 10) {
      uVar1 = *(ushort *)(DAT_00355f44 + 0xe);
      if ((((uVar1 & 0x100) == 0 || (uVar1 & 0x200) == 0) || (uVar1 & 0x400) == 0) ||
          (uVar1 & 0x800) == 0) {
        FUN_0036be34(param_2,DAT_00355f4c,extraout_r2,extraout_r3,unaff_r4,unaff_r5,unaff_r6,
                     unaff_lr);
      }
      else {
        FUN_0036be34(param_2,DAT_00355f48,extraout_r2,extraout_r3,unaff_r4,unaff_r5,unaff_r6,
                     unaff_lr);
      }
    }
    else {
      FUN_0036be34(param_2,0x83,extraout_r2,extraout_r3,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    }
    *(undefined4 *)(param_1 + 0x368) = 1;
    *(undefined4 *)(param_1 + 0x330) = 1;
    FUN_0034e32c(DAT_00355f50,param_1,param_2);
    return;
  }
  return;
}
