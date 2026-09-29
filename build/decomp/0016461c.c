// OoT3D decomp @ 0016461c  name=FUN_0016461c  size=268

void FUN_0016461c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_003510b0(param_1,DAT_00164728,param_3,param_4,param_4);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0016472c);
  FUN_00350318(param_1 + 0xa0,DAT_00164730 + 10);
  *(undefined1 *)(param_1 + 0x1f) = 6;
  uVar1 = DAT_00164734;
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x218) = uVar1;
  *(undefined4 *)(param_1 + 0x21c) = uVar1;
  *(undefined4 *)(param_1 + 0x220) = uVar1;
  uVar2 = DAT_00164738;
  *(undefined4 *)(param_1 + 0x224) = uVar1;
  *(undefined4 *)(param_1 + 0x228) = uVar1;
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  FUN_00372f38(param_1,param_2,param_1 + 0x270,0,0);
  if (((*DAT_0016473c & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0016473c), iVar3 != 0)) {
    FUN_0036788c(DAT_00164740);
  }
  *(undefined4 *)(*(int *)(DAT_00164740 + 0x17c) + 8) = 0;
  TorchAnimationModel_0034f94c(param_1 + 0x278,param_2,param_1,0xb);
  *(undefined1 *)(param_1 + 0x19b) = 3;
  return;
}
