// OoT3D decomp @ 0029cf1c  name=FUN_0029cf1c  size=232

void FUN_0029cf1c(int param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  undefined1 uVar3;
  undefined4 uVar4;

  psVar2 = DAT_0029d004;
  uVar4 = 0;
  *(short *)(DAT_0029d008 + param_1) = *DAT_0029d004;
  uVar3 = FUN_00363c10(param_2 + 0x3a58,0x73);
  *(undefined1 *)(param_1 + 0x1c9) = uVar3;
  sVar1 = *psVar2;
  if (sVar1 == 0) {
    *psVar2 = 1;
    *(undefined1 *)(param_1 + 3) = 0xff;
    FUN_003510b0(param_1,DAT_0029d00c);
    FUN_003532e8(param_1,1);
    FUN_00372f38(param_1,param_2,param_1 + 0x1cc,2,0,uVar4);
    uVar4 = FUN_00353fd4(param_1,param_2,2);
    uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar4);
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0029d010;
    return;
  }
  if (sVar1 == 1) {
    FUN_00374428(param_1);
  }
  return;
}
