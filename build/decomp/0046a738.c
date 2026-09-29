// OoT3D decomp @ 0046a738  name=FUN_0046a738  size=760

void FUN_0046a738(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_4c [2];
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;

  local_30 = *(int *)(param_1 + 0x3dc);
  local_34 = *(int *)(param_1 + 0x3e0);
  local_38 = *(undefined4 *)(param_1 + 0x3e4);
  local_28 = param_1;
  local_3c = FUN_002da7d8(*(undefined4 *)(param_1 + 0x10));
  local_40 = FUN_002da7c8(*(undefined4 *)(local_28 + 0x10));
  local_44 = 0;
  local_2c = local_3c + ((uint)(local_3c >> 0x1f) >> 0x1d);
  do {
    uVar10 = *(undefined4 *)(local_28 + 0x10);
    iVar4 = FUN_002d2674(uVar10,local_44,local_4c);
    iVar3 = local_4c[0];
    if (iVar4 == 0) {
      uVar5 = FUN_002d2664(uVar10);
      iVar4 = FUN_002d2674(uVar10,uVar5,local_4c);
      iVar3 = local_4c[0];
      if (iVar4 != 0) goto joined_r0x0046a804;
    }
    else {
joined_r0x0046a804:
      local_4c[0] = iVar3;
      if (iVar3 != 0) {
        iVar4 = (0x80000000U >> (LZCOUNT(local_3c + -1) - 1U & 0xff)) * (local_44 % 0x10);
        iVar11 = (0x80000000U >> (LZCOUNT(local_40 + -1) - 1U & 0xff)) *
                 ((int)(local_44 + ((uint)(local_44 >> 0x1f) >> 0x1c)) >> 4);
        uVar10 = FUN_002da60c(*(undefined4 *)(local_28 + 0x10));
        switch(uVar10) {
        case 0:
        case 2:
          FUN_002d2504(local_28,local_30,local_34,local_38,iVar3,local_3c,local_40,iVar4,iVar11);
          break;
        case 1:
          iVar16 = 0;
          iVar1 = local_3c >> 3;
          if (0 < local_40 >> 3) {
            do {
              pbVar13 = (byte *)(iVar3 + iVar16 * iVar1 * 8);
              iVar12 = local_30 + ((iVar11 >> 3) + iVar16) * (local_34 >> 3) * 0x20 +
                       (iVar4 >> 3) * 0x20;
              iVar14 = 0;
              if (0 < iVar1) {
                do {
                  iVar9 = 0;
                  iVar15 = 8;
                  pbVar8 = pbVar13;
                  do {
                    bVar2 = *pbVar8;
                    uVar6 = (uint)bVar2;
                    pbVar7 = (byte *)(iVar12 + iVar9 * 4);
                    iVar15 = iVar15 + -1;
                    pbVar8 = pbVar8 + (local_2c >> 3);
                    *pbVar7 = ((char)bVar2 >> 7) * -0xf | bVar2 >> 2 & 0x10;
                    iVar9 = iVar9 + 1;
                    pbVar7[1] = (char)((int)(uVar6 << 0x1a) >> 0x1f) * -0xf | bVar2 & 0x10;
                    pbVar7[2] = (char)((int)(uVar6 << 0x1c) >> 0x1f) * -0xf | (bVar2 & 4) << 2;
                    pbVar7[3] = (char)((int)(uVar6 << 0x1e) >> 0x1f) * -0xf |
                                (byte)((uVar6 & 1) << 4);
                  } while (iVar15 != 0);
                  iVar14 = iVar14 + 1;
                  pbVar13 = pbVar13 + 1;
                  iVar12 = iVar12 + 0x20;
                } while (iVar14 < iVar1);
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < local_40 >> 3);
          }
          break;
        case 3:
        case 4:
          FUN_002d23e0(local_28,local_30,local_34,local_38,iVar3,local_3c,local_40,iVar4,iVar11);
        }
      }
    }
    local_44 = local_44 + 1;
    if (0xff < local_44) {
      return;
    }
  } while( true );
}
