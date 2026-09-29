// OoT3D decomp @ 0026a704  name=FUN_0026a704  size=284

void FUN_0026a704(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;

  if (0 < *(short *)(param_1 + 0x1aa)) {
    *(short *)(param_1 + 0x1aa) = *(short *)(param_1 + 0x1aa) + -1;
  }
  if ((*(short *)(param_1 + 0x1c) == 0) && ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
    FUN_0034a928(param_1,DAT_0026a894);
  }
  fVar2 = DAT_0026a8a4;
  fVar1 = DAT_0026a8a0;
  if (*(short *)(param_1 + 0x1c) != -1 && *(short *)(param_1 + 0x1c) != 0) {
    if (*(code **)(param_1 + 0x1a4) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0026a884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x1a4))(param_1,param_2);
    return;
  }
  iVar3 = *DAT_0026a898;
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x1ac) =
       *(short *)(param_1 + 0x1ac) +
       (short)(int)(DAT_0026a8a4 + fVar4 * DAT_0026a89c * DAT_0026a8a0);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x1ae) =
       (short)(int)(fVar2 + fVar4 * DAT_0026a8a8 * fVar1) + *(short *)(param_1 + 0x1ae);
  uVar5 = FUN_002cfca0((int)*(short *)(param_1 + 0x1ac));
  uVar5 = FUN_002cfca0(uVar5,DAT_0026a8ac,(int)*(short *)(param_1 + 0x1ae));
                    /* WARNING: Subroutine does not return */
  FUN_003759d0(uVar5,DAT_0026a8b0);
}
