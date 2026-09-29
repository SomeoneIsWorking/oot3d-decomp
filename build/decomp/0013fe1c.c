// OoT3D decomp @ 0013fe1c  name=FUN_0013fe1c  size=344

void FUN_0013fe1c(int param_1)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  FUN_003731e0(param_1 + 0x22c);
  fVar4 = *(float *)(param_1 + 0x1a8) - *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x30);
  fVar3 = (float)FUN_003696ec(fVar4,fVar5);
  FUN_00375a18(param_1 + 0xbe,(int)(short)(int)(fVar3 * DAT_0013ff74),1,DAT_0013ff78,0);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0 && (*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined4 *)(param_1 + 100) = DAT_0013ff7c;
    *(undefined4 *)(param_1 + 0x6c) = DAT_0013ff80;
  }
  if (*(short *)(param_1 + 0x1ba) == 0) {
    *(undefined2 *)(param_1 + 0x1ba) = 5;
    FUN_00375bcc(param_1,DAT_0013ff84);
  }
  fVar4 = ABS(fVar4);
  iVar1 = (int)fVar4 - DAT_0013ff88;
  if ((int)fVar4 < DAT_0013ff88) {
    fVar4 = ABS(fVar5);
    iVar1 = (int)fVar4 - DAT_0013ff88;
  }
  if (iVar1 < 0 != SBORROW4((int)fVar4,DAT_0013ff88)) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x1b0);
    bVar2 = *(short *)(param_1 + 0x1ca) != 0;
    iVar1 = 0;
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 0x1d0);
      fVar4 = *(float *)(iVar1 + 0x13c);
    }
    if ((bVar2 && fVar4 != 0.0) && (*(short *)(iVar1 + 0x1b0) == 0)) {
      *(undefined2 *)(iVar1 + 0x1b0) = 4;
      *(undefined2 *)(*(int *)(param_1 + 0x1d0) + 0x1b2) = 2;
      FUN_0036ec40(0,DAT_0013ff8c);
    }
    *(undefined4 *)(param_1 + 0x6c) = DAT_0013ff90;
    *(undefined1 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0013ff94;
  }
  return;
}
