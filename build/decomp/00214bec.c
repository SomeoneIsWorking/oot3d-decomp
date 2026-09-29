// OoT3D decomp @ 00214bec  name=FUN_00214bec  size=528

void FUN_00214bec(int param_1,int param_2)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  float local_44;
  undefined4 local_40;

  if (0 < *(short *)(param_1 + 0x228)) {
    *(short *)(param_1 + 0x228) = *(short *)(param_1 + 0x228) + -1;
  }
  (**(code **)(param_1 + 0x1bc))(param_1,param_2);
  iVar3 = DAT_00214f78;
  if ((*(byte *)(param_1 + 0x26b) & 4) == 0) {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  else {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x24c) + *(float *)(param_1 + 0x25c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x250);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x254) + *(float *)(param_1 + 0x260);
    if (*(int *)(param_1 + 0x98) < iVar3) {
      uVar4 = VectorSignedToFloat((int)(short)(int)(DAT_00214f80 +
                                                   *(float *)(param_1 + 0x54) * DAT_00214f7c),
                                  (byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x200) = uVar4;
      FUN_0037632c(param_1,param_1 + 0x1c0);
      FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1c0);
    }
    local_48 = *(undefined4 *)(param_1 + 0x28);
    local_44 = *(float *)(param_1 + 0x2c) + DAT_00214f84;
    local_40 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_4c,param_1,&local_48);
    uVar4 = DAT_00214f88;
    *(undefined4 *)(param_1 + 0x84) = uVar5;
    fVar6 = DAT_00214f8c;
    *(undefined4 *)(param_1 + 200) = uVar4;
    iVar3 = DAT_00214f90;
    *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0x54) * fVar6;
    for (psVar2 = *(short **)(iVar3 + param_2); psVar2 != (short *)0x0;
        psVar2 = *(short **)(psVar2 + 0x98)) {
      if ((*psVar2 == 0x14) &&
         (fVar8 = *(float *)(psVar2 + 0x14) - *(float *)(param_1 + 0x28),
         fVar6 = *(float *)(psVar2 + 0x16) - *(float *)(param_1 + 0x2c),
         fVar7 = *(float *)(psVar2 + 0x18) - *(float *)(param_1 + 0x30),
         (int)(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) < DAT_00214f94)) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0(20000);
      }
    }
  }
  FUN_0037322c(DAT_00214fb4,param_1);
  if ((*(byte *)(param_1 + 0x26b) & 0x20) != 0) {
    iVar3 = FUN_0036adf4(param_1);
    if (iVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 0x26b) & 0x7f;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x26b) | 0x80;
    }
    *(byte *)(param_1 + 0x26b) = bVar1;
  }
  return;
}
