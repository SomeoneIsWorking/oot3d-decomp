// OoT3D decomp @ 00110e98  name=FUN_00110e98  size=372

void FUN_00110e98(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;

  if (*(short *)(param_1 + 0x1ca) < 1) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0011100c;
    FUN_0036df4c(param_1 + 0x28,param_1 + 8);
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0x14);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x16);
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0x18);
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  }
  else {
    *(short *)(param_1 + 0x1c4) = *(short *)(param_1 + 0x1c4) + 10000;
    fVar2 = (float)FUN_002cfca0();
    fVar3 = DAT_00111010;
    *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x14) + (short)(int)(fVar2 * DAT_00111010);
    fVar2 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x1c4));
    *(short *)(param_1 + 0x38) = *(short *)(param_1 + 0x18) + (short)(int)(fVar2 * fVar3);
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
    *(short *)(param_1 + 0x1c6) = *(short *)(param_1 + 0x1c6) + 18000;
    fVar3 = (float)FUN_002cfca0();
    *(float *)(param_1 + 0x2c) = fVar3 + *(float *)(param_1 + 0xc);
    *(short *)(param_1 + 0x1c8) = *(short *)(param_1 + 0x1c8) + 18000;
    fVar2 = (float)FUN_002cfca0();
    fVar3 = DAT_00111014;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar2 * DAT_00111014;
    fVar2 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x1c8));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar2 * fVar3;
  }
  iVar1 = (int)((ulonglong)((longlong)DAT_00111018 * (longlong)(int)*(short *)(param_1 + 0x1ca)) >>
               0x20);
  if ((int)*(short *)(param_1 + 0x1ca) + ((iVar1 >> 1) - (iVar1 >> 0x1f)) * -5 == 0) {
    FUN_00375c44(param_2,param_1 + 0x28,0x10,DAT_0011101c);
    return;
  }
  return;
}
