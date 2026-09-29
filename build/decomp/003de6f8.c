// OoT3D decomp @ 003de6f8  name=FUN_003de6f8  size=548

void FUN_003de6f8(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  float local_2c;
  undefined4 local_28;
  float local_24;

  uVar1 = DAT_003de91c;
  if (((*(char *)(param_1 + 0x1c1) == '\x01') && (*(short *)(param_1 + 0x1c) < 0x40)) &&
     (iVar3 = FUN_0036e864(param_2), iVar3 != 0)) {
    *(undefined1 *)(param_1 + 0x1c1) = 5;
    iVar3 = DAT_003de924;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_003de920;
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    *(undefined2 *)(iVar3 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = uVar1;
    FUN_00371808(param_2,DAT_003de928,0xffffff9d,param_1,0);
  }
  else {
    uVar4 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x1c1),(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = FUN_003705a0(*(undefined4 *)(param_1 + 0x1c4),uVar4,param_1 + 0x2c);
    if (iVar3 != 0) {
      FUN_00375bcc(param_1,DAT_003de92c);
      *(undefined4 *)(param_1 + 0x1bc) = uVar1;
    }
  }
  uVar4 = DAT_003de93c;
  uVar1 = DAT_003de938;
  fVar2 = DAT_003de934;
  local_28 = *(undefined4 *)(param_1 + 0xc);
  if ((*(uint *)(DAT_003de930 + param_2) & 1) == 0) {
    local_2c = (float)FUN_003738a8(DAT_003de938);
    local_2c = local_2c + *(float *)(param_1 + 0x28);
    local_24 = *(float *)(param_1 + 0x30) + fVar2;
    FUN_0037378c(uVar4,param_2,&local_2c,1,0x14,0x3c,1);
    local_2c = (float)FUN_003738a8(uVar1);
    local_2c = local_2c + *(float *)(param_1 + 0x28);
    local_24 = *(float *)(param_1 + 0x30) - fVar2;
    FUN_0037378c(uVar4,param_2,&local_2c,1,0x14,0x3c,1);
  }
  else {
    local_2c = *(float *)(param_1 + 0x28) + DAT_003de934;
    local_24 = (float)FUN_003738a8(DAT_003de938);
    local_24 = local_24 + *(float *)(param_1 + 0x30);
    FUN_0037378c(uVar4,param_2,&local_2c,1,0x14,0x3c,1);
    local_2c = *(float *)(param_1 + 0x28) - fVar2;
    local_24 = (float)FUN_003738a8(uVar1);
    local_24 = local_24 + *(float *)(param_1 + 0x30);
    FUN_0037378c(uVar4,param_2,&local_2c,1,0x14,0x3c,1);
  }
  if (*(char *)(param_1 + 0x1c1) == '\x05') {
    FUN_00373264(param_1,DAT_003de940);
  }
  return;
}
