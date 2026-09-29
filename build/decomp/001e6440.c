// OoT3D decomp @ 001e6440  name=FUN_001e6440  size=232

void FUN_001e6440(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float local_2c;
  undefined4 local_28;
  float local_24;

  fVar2 = DAT_001e6528;
  uVar4 = 0;
  local_28 = *(undefined4 *)(param_1 + 0x2c);
  sVar1 = *(short *)(param_1 + 0x36);
  do {
    if ((*(ushort *)(param_1 + 0x1c4) >> (uVar4 & 0xff) & 1) == 0) {
      fVar5 = (float)FUN_002cfca0((int)sVar1);
      local_2c = *(float *)(param_1 + 0x28) + fVar5 * fVar2;
      fVar5 = (float)FUN_00338f60((int)sVar1);
      local_24 = *(float *)(param_1 + 0x30) + fVar5 * fVar2;
      iVar3 = FUN_0035353c(param_2,&local_2c,0x4000);
      *(int *)(param_1 + uVar4 * 4 + 0x1a8) = iVar3;
      if (iVar3 != 0) {
        *(undefined1 *)(iVar3 + 3) = *(undefined1 *)(param_1 + 3);
      }
    }
    sVar1 = sVar1 + 0x2aaa;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 6);
  if (-1 < (int)((uint)*(ushort *)(param_1 + 0x1c4) << 0x19)) {
    local_2c = *(float *)(param_1 + 0x28);
    local_24 = *(float *)(param_1 + 0x30);
    iVar3 = FUN_0035353c(param_2,&local_2c,DAT_001e652c);
    *(int *)(param_1 + 0x1c0) = iVar3;
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 3) = *(undefined1 *)(param_1 + 3);
    }
  }
  return;
}
