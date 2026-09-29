// OoT3D decomp @ 00158648  name=FUN_00158648  size=168

void FUN_00158648(int param_1)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;

  if ((*(short *)(param_1 + 0x59c) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x59c) + -1, *(short *)(param_1 + 0x59c) = sVar1, sVar1 == 0)) {
    FUN_003731e0(param_1 + 0x1d4);
    fVar2 = DAT_0015870c;
    *(undefined4 *)(param_1 + 0x140) = DAT_00158700;
    fVar5 = DAT_00158704;
    if (*(short *)(param_1 + 0x1c) != 0) {
      fVar5 = DAT_00158708;
    }
    iVar4 = FUN_003705a0(fVar5,fVar5 * fVar2,param_1 + 0x54);
    uVar3 = DAT_00158710;
    if (iVar4 != 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef | 1;
      *(undefined1 *)(param_1 + 0xb7) = 1;
      *(undefined2 *)(param_1 + 0x59c) = 0x96;
      FUN_003731e8(uVar3,param_1 + 0x1d4);
      *(byte *)(param_1 + 0x5b5) = *(byte *)(param_1 + 0x5b5) | 1;
      *(undefined4 *)(param_1 + 0x598) = uRam00158714;
    }
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  }
  return;
}
