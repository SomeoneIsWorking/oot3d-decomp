// OoT3D decomp @ 003422e4  name=FUN_003422e4  size=156

void FUN_003422e4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  puVar1 = DAT_00342384;
  if (((*(uint *)(DAT_00342380 + 0x18) & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_00342388), uVar3 = DAT_0034238c, iVar2 != 0)) {
    *puVar1 = DAT_0034238c;
    puVar1[1] = uVar3;
    puVar1[2] = uVar3;
  }
  uVar3 = DAT_00342390;
  FUN_0035fb94(param_1 + 0x204,DAT_00342390);
  FUN_0035fb94(param_1 + 0x20a,uVar3);
  FUN_0035fb94(param_1 + 0x210,uVar3);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  *(undefined4 *)(param_1 + 0x218) = *puVar1;
  *(undefined4 *)(param_1 + 0x21c) = uVar3;
  *(undefined4 *)(param_1 + 0x220) = uVar4;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  *(undefined4 *)(param_1 + 0x224) = *puVar1;
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  *(undefined4 *)(param_1 + 0x22c) = uVar4;
  *(undefined1 *)(param_1 + 0x200) = 3;
  return;
}
