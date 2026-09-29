// OoT3D decomp @ 001d8d7c  name=FUN_001d8d7c  size=152

void FUN_001d8d7c(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;

  (**(code **)(DAT_001d8fc4 + (uint)*(byte *)(param_1 + 0x1a4) * 4))(param_1,param_2);
  FUN_00376864(param_1);
  FUN_00376340(DAT_001d8fd0,DAT_001d8fcc,DAT_001d8fc8,param_2,param_1,0x1d);
  if (*(short *)(param_2 + 0x104) == 99) {
    uVar2 = *(uint *)(param_1 + 0x30);
    if (DAT_001d8fd4 <= *(uint *)(param_1 + 0x30)) {
      uVar2 = DAT_001d8fd8;
    }
    *(uint *)(param_1 + 0x30) = uVar2;
  }
  fVar1 = DAT_001d8fdc;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar1;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
