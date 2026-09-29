// OoT3D decomp @ 00258950  name=FUN_00258950  size=172

void FUN_00258950(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_30;
  undefined4 local_2c;
  float local_28;

  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
  fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  fVar1 = DAT_00258a00;
  local_2c = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = 0;
  fVar6 = DAT_002589fc;
  do {
    if ((*(ushort *)(param_1 + 0x1c4) >> (uVar3 & 0xff) & 1) == 0) {
      local_30 = *(float *)(param_1 + 0x28) + fVar4 * fVar6;
      local_28 = *(float *)(param_1 + 0x30) + fVar5 * fVar6;
      iVar2 = FUN_0035353c(param_2,&local_30,0x4000);
      *(int *)(param_1 + uVar3 * 4 + 0x1a8) = iVar2;
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(param_1 + 3);
      }
    }
    fVar6 = fVar6 + fVar1;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 5);
  return;
}
