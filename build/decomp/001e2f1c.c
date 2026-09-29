// OoT3D decomp @ 001e2f1c  name=FUN_001e2f1c  size=312

void FUN_001e2f1c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;

  iVar5 = DAT_001e30d8;
  iVar3 = *(int *)(DAT_001e30d8 + param_2);
  *(undefined1 *)(param_1 + 0x2227) = 0;
  *(undefined2 *)(param_3 + 0xe) = 0;
  *(undefined2 *)(param_3 + 0xc) = 0;
  fVar2 = DAT_001e30e4;
  uVar1 = DAT_001e30e0;
  if (('\0' < *(char *)(iVar5 + 0x3dc + param_1)) &&
     (*(float *)(param_1 + 0x2c) < *(float *)(param_1 + 0x84) - DAT_001e30dc)) {
    *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xfe;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined1 *)(param_1 + 0x2488) = 0;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2a50) + fVar2;
    fVar4 = (float)FUN_002cfca0((int)*(short *)(iVar3 + 0xbe));
    fVar2 = DAT_001e30e8;
    *(float *)(param_1 + 0x28) = *(float *)(iVar3 + 0x28) + fVar4 * DAT_001e30e8;
    fVar4 = (float)FUN_00338f60((int)*(short *)(iVar3 + 0xbe));
    *(float *)(param_1 + 0x30) = *(float *)(iVar3 + 0x30) + fVar4 * fVar2;
    iVar5 = FUN_0035a4fc(param_1,param_1 + 0x2a4c);
    if (DAT_001e30ec < iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
    FUN_0036df4c(param_1 + 8,param_1 + 0x28);
    (**(code **)(DAT_001e30fc + param_2))(DAT_001e3100,param_1,param_2);
    *(undefined1 *)(param_1 + 0x2a9d) = 1;
    *(undefined4 *)(param_1 + 0x2a88) = uVar1;
    if (*(char *)(param_1 + 0x2aa4) != -1) {
      *(undefined1 *)(param_1 + 0x2aa1) = 0;
      *(undefined1 *)(param_1 + 0x2aa2) = 0;
    }
  }
  return;
}
