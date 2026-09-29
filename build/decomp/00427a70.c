// OoT3D decomp @ 00427a70  name=FUN_00427a70  size=520

void FUN_00427a70(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  undefined4 uVar6;
  char local_24 [4];
  ushort local_20 [2];
  ushort local_1c [2];

  iVar2 = DAT_00427c78;
  if (*(int *)(DAT_00427c78 + 0x14) != 0) {
    FUN_002f9484(local_1c,local_20,local_24);
    piVar3 = DAT_00427c7c;
    iVar4 = *(int *)(iVar2 + 0x14);
    if (iVar4 == 1) {
      if (local_24[0] == '\0') {
        *(undefined4 *)(iVar2 + 0x14) = 2;
      }
      return;
    }
    if (iVar4 == 2) {
      iVar4 = *DAT_00427c7c;
      cVar1 = *(char *)(iVar4 + 0x19);
      if (cVar1 == '\0') {
        uVar5 = (uint)*(short *)(iVar4 + 0xc);
      }
      else if (cVar1 == '\x01') {
        uVar5 = (uint)*(short *)(iVar4 + 0xe);
      }
      else {
        uVar5 = (uint)*(short *)(iVar4 + 0x10);
      }
      *(uint *)(iVar2 + 0x1c) = uVar5 & 0xff;
      if (cVar1 == '\0') {
        uVar5 = (uint)*(short *)(iVar4 + 0x12);
      }
      else if (cVar1 == '\x01') {
        uVar5 = (uint)*(short *)(iVar4 + 0x14);
      }
      else {
        uVar5 = (uint)*(short *)(iVar4 + 0x16);
      }
      *(uint *)(iVar2 + 0x20) = uVar5 & 0xff;
      if (local_24[0] == '\0') {
LAB_00427bf0:
        iVar4 = FUN_0033f428(100,0,0x40,0x28,0);
        if (iVar4 == 0) {
          iVar4 = FUN_0033f428(0,0,0x46,0x28,0);
          if (iVar4 != 0) {
            *(undefined4 *)(iVar2 + 0x14) = 0;
            FUN_002f87ec(0);
          }
          return;
        }
        FUN_00301694(*piVar3,*(uint *)(iVar2 + 0x24) & 0xff,*(uint *)(iVar2 + 0x28) & 0xff);
        return;
      }
      iVar4 = FUN_0033f428(0x3a,0x2c,0x80,0x20,0);
      if (iVar4 == 0) {
        iVar4 = FUN_0033f428(0xbc,0x2c,0x80,0x20,0);
        if (iVar4 == 0) {
          *(undefined4 *)(iVar2 + 0x18) = 0;
          goto LAB_00427bf0;
        }
        *(undefined4 *)(iVar2 + 0x18) = 2;
        uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(iVar2 + 0x10) = uVar6;
      }
      else {
        *(undefined4 *)(iVar2 + 0x18) = 1;
        uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(iVar2 + 0x10) = uVar6;
      }
      *(uint *)(iVar2 + 8) = (uint)local_1c[0];
      *(uint *)(iVar2 + 0xc) = (uint)local_20[0];
      *(undefined4 *)(iVar2 + 0x14) = 3;
      return;
    }
    if (iVar4 == 3) {
      if (local_24[0] == '\0') {
        *(undefined4 *)(iVar2 + 0x14) = 1;
        return;
      }
      FUN_0043c7d0(local_1c[0],local_20[0]);
    }
  }
  return;
}
