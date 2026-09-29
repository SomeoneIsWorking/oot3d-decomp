// OoT3D decomp @ 001745ac  name=FUN_001745ac  size=156

void FUN_001745ac(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;

  iVar4 = *(int *)(DAT_00174648 + param_2);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x280;
  uVar1 = DAT_0017464c;
  if (*(short *)(param_1 + 0x1ae) != 0) {
    uVar3 = *(undefined4 *)(iVar4 + 0x2c);
    uVar5 = *(undefined4 *)(iVar4 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    fVar6 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1ae) * (short)uVar1));
    iVar2 = DAT_00174658;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1ae),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar6 = DAT_00174654 + fVar6 * fVar7 * DAT_00174650 + *(float *)(iVar4 + 0x2c);
    *(float *)(param_1 + 0x2c) = fVar6;
    if (*(int *)(iVar2 + 4) == 0) {
      *(float *)(param_1 + 0x2c) = fVar6 + DAT_0017465c;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
