// OoT3D decomp @ 001551ac  name=FUN_001551ac  size=200

void FUN_001551ac(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;

  uVar2 = DAT_00155354;
  fVar1 = DAT_00155350;
  iVar4 = *(int *)(DAT_0015534c + param_2);
  *(float *)(param_1 + 0x730) = *(float *)(param_1 + 0x730) + DAT_00155350;
  FUN_00373500(DAT_00155358,fVar1,uVar2,param_1 + 0x744);
  if (((int)ABS(*(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28)) < DAT_0015535c) &&
     ((int)ABS(*(float *)(param_1 + 0x30) - *(float *)(iVar4 + 0x30)) < DAT_0015535c)) {
    sVar3 = *(short *)(param_1 + 0x71e) + 1;
    *(short *)(param_1 + 0x71e) = sVar3;
    if (9 < sVar3) {
      *(undefined4 *)(param_1 + 0x708) = DAT_00155360;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x71e) = 0;
  }
  if ((*(ushort *)(param_1 + 0x718) & 0xf) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
