// OoT3D decomp @ 004c08c0  name=FUN_004c08c0  size=492

byte * FUN_004c08c0(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = 0xff;
  if (*param_2 == 0x7f) {
    param_2 = param_2 + 1;
    uVar3 = (uint)*param_2;
  }
  *(char *)(param_1 + 4) = (char)uVar3;
  if (uVar3 == 0xff) {
    uVar3 = 0;
    if (param_2 != (byte *)0x0) {
      bVar1 = *param_2;
      uVar3 = (uint)(bVar1 < 0x80);
      if (bVar1 >= 0x80) {
        if ((bVar1 & 0xe0) == 0xc0) {
          uVar3 = 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          uVar3 = 3;
        }
        else if ((bVar1 & 0xf8) == 0xf0) {
          uVar3 = 4;
        }
      }
    }
    return param_2 + uVar3;
  }
  puVar5 = (uint *)(DAT_004c0aac + uVar3 * 8);
  uVar6 = *puVar5;
  uVar8 = puVar5[1];
  if (uVar3 == 0x1a) {
    *(uint *)(param_1 + 8) =
         (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
    *(uint *)(param_1 + 0xc) =
         (*(ushort *)(param_2 + 3) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 3) >> 8);
    goto LAB_004c0aa0;
  }
  if (uVar3 < 0x1b) {
    if (uVar3 == 3) {
      uVar3 = (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
LAB_004c0a54:
      *(uint *)(param_1 + 8) = uVar3;
      goto LAB_004c0aa0;
    }
    if (uVar3 == 0xd || uVar3 == 0xe) {
      *(uint *)(param_1 + 8) = (uint)param_2[1];
      uVar3 = *(uint *)(param_2 + 2);
      uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
              (uint)param_2[5];
LAB_004c0a00:
      *(uint *)(param_1 + 0xc) = uVar3;
      goto LAB_004c0aa0;
    }
    if (uVar3 == 0x11) {
      *(uint *)(param_1 + 8) = (uint)param_2[1];
      *(uint *)(param_1 + 0xc) = (uint)(param_2[2] >> 4);
      *(uint *)(param_1 + 0x10) = param_2[2] & 0xf;
      *(uint *)(param_1 + 0x14) = (uint)(param_2[3] >> 4);
      *(uint *)(param_1 + 0x18) = param_2[3] & 0xf;
      goto LAB_004c0aa0;
    }
  }
  else {
    if (uVar3 == 0x1b) {
      *(uint *)(param_1 + 8) =
           (*(ushort *)(param_2 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 1) >> 8);
      *(uint *)(param_1 + 0xc) =
           (*(ushort *)(param_2 + 3) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 3) >> 8);
      *(uint *)(param_1 + 0x10) =
           (*(ushort *)(param_2 + 5) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 5) >> 8);
      goto LAB_004c0aa0;
    }
    if (uVar3 == 0x1d) {
      uVar3 = param_2[1] & 7;
      goto LAB_004c0a54;
    }
    if (uVar3 == 0x25) {
      *(uint *)(param_1 + 8) = (uint)param_2[1];
      uVar3 = (*(ushort *)(param_2 + 2) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 2) >> 8);
      goto LAB_004c0a00;
    }
  }
  if (0 < (int)uVar6) {
    puVar5 = (uint *)(param_1 + 4);
    pbVar4 = param_2;
    if ((uVar6 & 1) != 0) {
      pbVar4 = param_2 + 1;
      puVar5 = (uint *)(param_1 + 8);
      *puVar5 = (uint)*pbVar4;
    }
    bVar1 = pbVar4[1];
    for (iVar7 = (int)uVar6 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      bVar2 = pbVar4[2];
      puVar5[1] = (uint)bVar1;
      bVar1 = pbVar4[3];
      puVar5 = puVar5 + 2;
      *puVar5 = (uint)bVar2;
      pbVar4 = pbVar4 + 2;
    }
  }
LAB_004c0aa0:
  return param_2 + uVar8;
}

