// OoT3D decomp @ 001e7e70  name=FUN_001e7e70  size=220

void FUN_001e7e70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  FUN_003731e0(param_1 + 0x2fc);
  fVar6 = *(float *)(param_1 + 0x1ac) - *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x30);
  fVar4 = (float)FUN_003696ec(fVar6,fVar5);
  FUN_00375a18(param_1 + 0xbe,(int)(short)(int)(fVar4 * DAT_001e7f4c),1,DAT_001e7f50,0);
  if (*(ushort *)(param_1 + 0x1ee) == 0) {
    *(undefined2 *)(param_1 + 0x1ee) = 0xf;
  }
  else if ((*(ushort *)(param_1 + 0x1ee) & 1) == 0) {
    FUN_00375bcc(param_1,DAT_001e7f54);
  }
  uVar3 = DAT_001e7f60;
  fVar6 = ABS(fVar6);
  iVar1 = (int)fVar6 - DAT_001e7f58;
  if ((int)fVar6 < DAT_001e7f58) {
    fVar6 = ABS(fVar5);
    iVar1 = (int)fVar6 - DAT_001e7f58;
  }
  if (iVar1 < 0 != SBORROW4((int)fVar6,DAT_001e7f58)) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1ac);
    uVar2 = DAT_001e7f5c;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x1b4);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  }
  return;
}
