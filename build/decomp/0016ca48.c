// OoT3D decomp @ 0016ca48  name=FUN_0016ca48  size=204

void FUN_0016ca48(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffffb;
  iVar1 = DAT_0016cb14;
  *(undefined1 *)(param_1 + 0xe74) = 7;
  *(undefined1 *)(iVar1 + param_1) = 1;
  fVar2 = DAT_0016cb18;
  if ((*(uint *)(param_1 + 0xe40) & 7) != 0) {
    fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar3 * fVar2;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar4 * fVar2;
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0x2c) - (*(float *)(param_1 + 0xe48) - *(float *)(param_1 + 0xed8));
    *(uint *)(param_1 + 0xe40) = *(uint *)(param_1 + 0xe40) & 0xfffffff8;
    *(undefined1 *)(param_1 + 0xec4) = 0;
  }
  FUN_0037422c(*(float *)(param_1 + 0x6c) * DAT_0016cb20,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(DAT_0016cb1c + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4));
  return;
}

