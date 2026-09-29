// OoT3D decomp @ 001ca520  name=FUN_001ca520  size=220

void FUN_001ca520(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;

  FUN_00370734(param_1 + 0x1a4);
  FUN_00370378(param_1 + 0x34,DAT_001ca5fc,0x450);
  FUN_003705a0(DAT_001ca604,DAT_001ca600,param_1 + 0x6c);
  sVar1 = *(short *)(param_1 + 0x7e0);
  if (sVar1 == -1) {
    if ((*(ushort *)(param_1 + 0x90) & 9) != 0) {
      *(undefined2 *)(param_1 + 0x7e0) = 0xf;
      FUN_00375c44(param_2,param_1 + 0x28,0x1e,DAT_001ca608);
      if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
        FUN_0036e670(param_2,param_1 + 0x28,0,0,1,700);
      }
    }
  }
  else if ((sVar1 == 0) || (*(short *)(param_1 + 0x7e0) = sVar1 + -1, (short)(sVar1 + -1) == 0)) {
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x810) = 0x19;
    FUN_0036e734(param_1 + 0x1a4,0);
    fVar2 = DAT_00346700;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
    uVar3 = DAT_00346704;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar2;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 == 10) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (sVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar1 = *(short *)(*(int *)(param_1 + 0x124) + 0x36) + sVar1 * 0x4000;
    *(short *)(param_1 + 0x36) = sVar1;
    fVar5 = (float)FUN_002cfca0((int)sVar1);
    fVar2 = DAT_0034670c;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar5 * DAT_0034670c;
    fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar5 * fVar2;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x36) + 0x4000;
    *(byte *)(param_1 + 0x800) = *(byte *)(param_1 + 0x800) & 0xfe;
    *(byte *)(param_1 + 0x801) = *(byte *)(param_1 + 0x801) & 0xfe;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffefff | 1;
    uVar4 = DAT_00346710;
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
    *(undefined4 *)(param_1 + 0xc4) = uVar3;
    *(undefined4 *)(param_1 + 0x7dc) = uVar4;
    return;
  }
  return;
}
