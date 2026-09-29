// OoT3D decomp @ 003e339c  name=FUN_003e339c  size=460

void FUN_003e339c(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;

  iVar4 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  uVar2 = DAT_003e3574;
  if (iVar4 != 0) {
    return;
  }
  iVar4 = *(int *)(DAT_003e3568 + param_2);
  if (DAT_003e356c < *(int *)(param_1 + 0x98)) {
    return;
  }
  if (*(byte *)(param_1 + 0x201) == 0) {
    *(uint *)(iVar4 + 0x1714) = *(uint *)(iVar4 + 0x1714) | 0x800000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    if ((*(uint *)(iVar4 + 0x1714) & 0x1000000) == 0) {
      return;
    }
    FUN_0037073c(param_2,1);
    bVar3 = *(byte *)(param_1 + 0x201) | 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x201) & 1) == 0) {
      return;
    }
    if (*(short *)(param_2 + 0x2b7e) != 4) {
      if (*(short *)(param_2 + 0x2b7e) != 1) {
        return;
      }
      *(uint *)(iVar4 + 0x1714) = *(uint *)(iVar4 + 0x1714) | 0x800000;
      return;
    }
    sVar1 = *(short *)(param_2 + 0x2b82);
    if ((((sVar1 == 6 || sVar1 == 7) || sVar1 == 8) || sVar1 == 9) || sVar1 == 10) {
      z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_003e3570,
                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x18,0,0,0,2,1);
      FUN_00375bcc(param_1,uVar2);
      FUN_00375c10(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    }
    else if (sVar1 == 0xb) {
      z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_003e3570,
                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x18,0,0,0,7,1);
      FUN_00375bcc(param_1,uVar2);
      FUN_00375c10(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    }
    bVar3 = 0;
  }
  *(byte *)(param_1 + 0x201) = bVar3;
  return;
}
