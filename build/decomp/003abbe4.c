// OoT3D decomp @ 003abbe4  name=FUN_003abbe4  size=432

void FUN_003abbe4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  FUN_0037308c(DAT_003abd94,param_2,param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x1a4) = 0x10;
  *(undefined1 *)(param_1 + 0xe74) = 0xd;
  fVar5 = DAT_003abd98;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 4;
  iVar2 = DAT_003abdb0;
  uVar1 = DAT_003abdac;
  *(uint *)(param_1 + 0xe40) = *(uint *)(param_1 + 0xe40) | 2;
  fVar5 = *(float *)(*(int *)(param_1 + 0x23c) + 0x1c) * fVar5;
  *(undefined4 *)(param_1 + 0x103c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1040) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1044) = *(undefined4 *)(param_1 + 0x30);
  fVar6 = *(float *)(param_1 + 0x1040) + fVar5;
  *(float *)(param_1 + 0x1040) = fVar6;
  iVar4 = DAT_003abd9c + (uint)*(byte *)(param_1 + 0x1038) * 0x1c;
  *(float *)(param_1 + 0x104c) =
       (((*(float *)(iVar4 + 0x14) + *(float *)(DAT_003abda0 + 0xc)) - fVar6) - DAT_003abda4) *
       DAT_003abda8;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 8;
  *(float *)(param_1 + 0xebc) = *(float *)(param_1 + 0xebc) - fVar5;
  *(short *)(param_1 + 0x1050) = *(short *)(param_1 + 0x36) - *(short *)(iVar4 + 10);
  *(undefined4 *)(param_1 + 0x1048) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar3 = FUN_0036ae14(param_1 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_1 + 0xe74) * 4));
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003abdb8,uVar1,uVar3,DAT_003abdb4,param_1 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                (uint)*(byte *)(param_1 + 0xe74) * 4),2);
  *(undefined4 *)(param_1 + 0xe80) = *(undefined4 *)(param_1 + 0xe8c);
  *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
  *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
  if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
    FUN_0037547c(DAT_003abdc4,param_1 + 0xe80,4,DAT_003abdc0,DAT_003abdc0,DAT_003abdbc);
  }
  FUN_0037547c(DAT_003abdc8,param_1 + 0x28,4,DAT_003abdc0,DAT_003abdc0,DAT_003abdbc);
  *(undefined4 *)(param_1 + 0xea8) = 0;
  return;
}

