// OoT3D decomp @ 00241944  name=FUN_00241944  size=448

void FUN_00241944(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined4 local_24;
  undefined4 local_20;

  local_20 = 0;
  FUN_003510b0(param_1,DAT_00241b04);
  *(byte *)(param_1 + 0x1c8) = (byte)(((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(short *)(param_1 + 0x1c) = (short)uVar1;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  local_24 = DAT_00241b08;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,*(undefined1 *)((int)&local_24 + uVar1),0);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00241b0c + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = iVar2 + 0x10;
  iVar3 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
  FUN_003532e8(param_1,1);
  if (*(short *)(param_1 + 0x1c) == 1) {
    fVar5 = *(float *)(param_1 + 0xc) + DAT_00241b10;
    *(float *)(param_1 + 0xc) = fVar5;
    *(float *)(param_1 + 0x2c) = fVar5;
    *(short *)(iVar3 + 0x12) = (short)(int)fVar5;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c0) + 0xc);
    uVar4 = FUN_00372f0c(iVar2,0);
    FUN_00372d94(iVar3,uVar4);
    uVar4 = DAT_00241b14;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  }
  else {
    if (*(short *)(param_1 + 0x1c) == 0) {
      local_20 = FUN_003532c0(iVar2,4);
      fVar5 = DAT_00241b1c;
      uVar4 = DAT_00241b18;
      *(undefined4 *)(param_1 + 0x5c) = DAT_00241b18;
      *(undefined4 *)(param_1 + 0x54) = uVar4;
      uVar4 = DAT_00241b20;
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x12),(byte)(in_fpscr >> 0x15) & 3)
      ;
      *(float *)(param_1 + 0x2c) = fVar6 + fVar5;
      *(undefined4 *)(param_1 + 0x1bc) = uVar4;
    }
    else {
      local_20 = FUN_003532c0(iVar2,0);
      uVar4 = DAT_00241b28;
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00241b24;
      *(undefined4 *)(param_1 + 0x140) = 0;
      FUN_0037322c(uVar4,param_1);
    }
    uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_20);
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  }
  *(undefined2 *)(param_1 + 0x1c4) = 0;
  return;
}
