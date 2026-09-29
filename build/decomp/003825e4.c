// OoT3D decomp @ 003825e4  name=FUN_003825e4  size=440

void FUN_003825e4(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float local_24 [2];
  float local_1c;

  iVar2 = *(short *)(param_1 + 0x1a8) + 1;
  *(short *)(param_1 + 0x1a8) = (short)iVar2 + (short)(iVar2 / 8) * -8;
  if ((*(byte *)(param_1 + 0x1bc) & 2) != 0) {
    *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xfd;
    FUN_0036f18c(param_1,0x4000);
    FUN_00374bb8(DAT_003827a0,DAT_0038279c,param_2,param_1);
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  if (*(int *)(param_1 + 0x1a4) == DAT_003827a4) {
    FUN_0036c5d8(param_1,local_24,*(int *)(DAT_003827a8 + param_2) + 0x28);
    fVar3 = DAT_003827b0;
    if (((uint)local_24[0] <= (uint)DAT_003827ac) &&
       (fVar3 = local_24[0], DAT_003827b4 < (int)local_24[0])) {
      fVar3 = DAT_003827b8;
    }
    if (*(short *)(param_1 + 0x1c) == 0) {
      if (DAT_003827c0 < local_1c) {
        uVar1 = 0xffff;
        local_1c = DAT_003827c4;
      }
      else {
        uVar1 = 1;
        local_1c = DAT_003827bc;
      }
      *(undefined2 *)(param_1 + 0x1c) = uVar1;
    }
    else {
      local_1c = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_1c = local_1c * DAT_003827bc;
    }
    local_24[0] = fVar3;
    fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x1f8) =
         local_24[0] * fVar4 + local_1c * fVar3 + *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x200) =
         (*(float *)(param_1 + 0x30) - local_24[0] * fVar3) + local_1c * fVar4;
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1ac);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1ac);
    FUN_00373264(param_1,DAT_003827c8);
    return;
  }
  return;
}
