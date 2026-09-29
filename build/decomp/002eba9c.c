// OoT3D decomp @ 002eba9c  name=FUN_002eba9c  size=2288

undefined4 FUN_002eba9c(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  char local_44 [4];
  ushort local_40 [2];
  ushort local_3c [2];
  int local_38;

  FUN_002f9484(local_3c,local_40,local_44);
  puVar3 = DAT_002ebdb4;
  fVar4 = DAT_002ebdb0;
  fVar15 = DAT_002ebdac;
  fVar16 = DAT_002ebda8;
  iVar9 = 0;
  fVar10 = (float)VectorUnsignedToFloat((uint)local_3c[0],(byte)(in_fpscr >> 0x15) & 3);
  uVar11 = VectorFloatToUnsigned((fVar10 - DAT_002ebda8) * DAT_002ebdac,3);
  uVar11 = uVar11 & 0xffff;
  fVar10 = (float)VectorUnsignedToFloat((uint)local_40[0],(byte)(in_fpscr >> 0x15) & 3);
  uVar12 = VectorFloatToUnsigned((fVar10 - DAT_002ebdb0) * DAT_002ebdac,3);
  uVar12 = uVar12 & 0xffff;
  iVar8 = uVar11 + uVar12 * 6;
  local_38 = iVar8;
  do {
    iVar7 = 0;
    do {
      if (*(int *)(puVar3 + 0x38) == -1) {
        fVar10 = (float)VectorSignedToFloat(iVar9 * 0x30,(byte)(in_fpscr >> 0x15) & 3);
        uVar13 = VectorFloatToUnsigned(fVar10 + fVar4,3);
        fVar10 = (float)VectorSignedToFloat(iVar7 * 0x30,(byte)(in_fpscr >> 0x15) & 3);
        uVar14 = VectorFloatToUnsigned(fVar10 + fVar16,3);
        iVar5 = FUN_0033f428(uVar14 & 0xffff,uVar13 & 0xffff,0x2a,0x2a,0);
        if (iVar5 != 0) {
          if (*(int *)(DAT_002ebdb8 + 4) == 0) {
            cVar1 = *(char *)(DAT_002ebdb8 + iVar8 + 0x13a2);
          }
          else {
            cVar1 = *(char *)(DAT_002ebdb8 + iVar8 + 0x138a);
          }
          if (cVar1 == -1 && param_1 == 1) {
            *(uint *)(puVar3 + 0x3c) = uVar11;
            *(uint *)(puVar3 + 0x3e) = uVar12;
            *(uint *)(puVar3 + 0x4a) = uVar11;
            *(uint *)(puVar3 + 0x4c) = uVar12;
            iVar9 = FUN_0033f238();
            if (iVar9 != 0) {
              FUN_0037547c(DAT_002ebdc4,0,4,DAT_002ebdc0,DAT_002ebdc0,DAT_002ebdbc);
            }
            FUN_002eb72c(iVar8,0);
            return 0;
          }
          FUN_002eb72c(iVar8,1);
          *(int *)(puVar3 + 0x38) = iVar8;
          *(uint *)(puVar3 + 0x3c) = uVar11;
          *(uint *)(puVar3 + 0x3e) = uVar12;
          *(uint *)(puVar3 + 0x4a) = uVar11;
          *(uint *)(puVar3 + 0x4c) = uVar12;
          return 0;
        }
      }
      else {
        fVar10 = (float)VectorSignedToFloat(iVar9 * 0x30,(byte)(in_fpscr >> 0x15) & 3);
        uVar13 = VectorFloatToUnsigned(fVar10 + fVar4,3);
        fVar10 = (float)VectorSignedToFloat(iVar7 * 0x30,(byte)(in_fpscr >> 0x15) & 3);
        uVar14 = VectorFloatToUnsigned(fVar10 + fVar16,3);
        iVar5 = FUN_0033f428(uVar14 & 0xffff,uVar13 & 0xffff,0x2a,0x2a,2);
        fVar10 = DAT_002ebdc8;
        if ((iVar5 != 0) && (*(int *)(puVar3 + 0x38) == iVar8)) {
          if (param_1 == 1) {
            fVar15 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
            uVar6 = VectorFloatToUnsigned(fVar16 + fVar15 * DAT_002ebdc8,3);
            *puVar3 = (ushort)uVar6;
            fVar16 = (float)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
            uVar6 = VectorFloatToUnsigned(fVar4 + fVar16 * fVar10,3);
            puVar3[1] = (ushort)uVar6;
            *(int *)(puVar3 + 0x28) = local_38;
            *(undefined4 *)(puVar3 + 0x44) = *(undefined4 *)(puVar3 + 0x4a);
            *(undefined4 *)(puVar3 + 0x46) = *(undefined4 *)(puVar3 + 0x4c);
            uVar17 = VectorSignedToFloat(puVar3[1] - 2,(byte)(in_fpscr >> 0x15) & 3);
            uVar6 = VectorSignedToFloat(*puVar3 - 2,(byte)(in_fpscr >> 0x15) & 3);
            FUN_002f7af4(uVar6,uVar17,*(undefined4 *)(DAT_002ebdcc + 4));
            puVar3[0x4a] = 0xffff;
            puVar3[0x4b] = 0xffff;
            puVar3[0x4c] = 0xffff;
            puVar3[0x4d] = 0xffff;
            return 1;
          }
          if (param_1 != 2) {
            return 1;
          }
          fVar18 = (float)VectorUnsignedToFloat((uint)local_3c[0],(byte)(in_fpscr >> 0x15) & 3);
          uVar6 = VectorFloatToUnsigned((fVar18 - fVar16) * fVar15,3);
          puVar3[2] = (ushort)uVar6;
          fVar18 = (float)VectorUnsignedToFloat((uint)local_40[0],(byte)(in_fpscr >> 0x15) & 3);
          uVar6 = VectorFloatToUnsigned((fVar18 - fVar4) * fVar15,3);
          puVar3[3] = (ushort)uVar6;
          fVar15 = (float)VectorUnsignedToFloat((uint)puVar3[2],(byte)(in_fpscr >> 0x15) & 3);
          uVar6 = VectorFloatToUnsigned(fVar16 + fVar15 * fVar10,3);
          puVar3[4] = (ushort)uVar6;
          fVar16 = (float)VectorUnsignedToFloat((uint)puVar3[3],(byte)(in_fpscr >> 0x15) & 3);
          uVar6 = VectorFloatToUnsigned(fVar4 + fVar16 * fVar10,3);
          puVar3[5] = (ushort)uVar6;
          *(uint *)(puVar3 + 0x2a) = (uint)puVar3[2] + (uint)puVar3[3] * 6;
          return 1;
        }
      }
      uVar17 = DAT_002ec160;
      uVar6 = DAT_002ec15c;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  uVar2 = (ushort)DAT_002ec160;
  if (*(int *)(puVar3 + 0x38) == -1) {
    iVar8 = FUN_0033f428(DAT_002ec160,7,0x2a,0x2a,0);
    if (iVar8 == 0) goto LAB_002ebf50;
    if (*(int *)(DAT_002ebdb8 + 4) == 0) {
      cVar1 = *(char *)(DAT_002ec164 + 0x3a2);
    }
    else {
      cVar1 = *(char *)(DAT_002ec164 + 0x38a);
    }
    if (cVar1 != -1 || param_1 != 1) {
      FUN_002eb72c(5,1);
      puVar3[0x38] = 5;
      puVar3[0x39] = 0;
      puVar3[0x3c] = 5;
      puVar3[0x3d] = 0;
      puVar3[0x3e] = 0;
      puVar3[0x3f] = 0;
      puVar3[0x4a] = 5;
      puVar3[0x4b] = 0;
      puVar3[0x4c] = 0;
      puVar3[0x4d] = 0;
      return 0;
    }
    puVar3[0x3c] = 5;
    puVar3[0x3d] = 0;
    puVar3[0x3e] = 0;
    puVar3[0x3f] = 0;
    puVar3[0x4a] = 5;
    puVar3[0x4b] = 0;
    puVar3[0x4c] = 0;
    puVar3[0x4d] = 0;
    iVar8 = FUN_0033f238();
    if (iVar8 != 0) {
      FUN_0037547c(DAT_002ebdc4,0,4,DAT_002ebdc0,DAT_002ebdc0,DAT_002ebdbc);
    }
    uVar6 = 5;
LAB_002ec2e8:
    FUN_002eb72c(uVar6,0);
  }
  else {
    iVar8 = FUN_0033f428(DAT_002ec160,7,0x2a,0x2a,2);
    if ((iVar8 != 0) && (*(int *)(puVar3 + 0x38) == 5)) {
      if (param_1 == 1) {
        *puVar3 = uVar2;
        puVar3[1] = 7;
        puVar3[0x28] = 5;
        uVar17 = DAT_002ec168;
        puVar3[0x29] = 0;
        *(undefined4 *)(puVar3 + 0x44) = *(undefined4 *)(puVar3 + 0x4a);
        *(undefined4 *)(puVar3 + 0x46) = *(undefined4 *)(puVar3 + 0x4c);
        FUN_002f7af4(uVar6,uVar17,*(undefined4 *)(DAT_002ebdcc + 4));
        puVar3[0x4a] = 0xffff;
        puVar3[0x4b] = 0xffff;
        puVar3[0x4c] = 0xffff;
        puVar3[0x4d] = 0xffff;
        return 1;
      }
      if (param_1 != 2) {
        return 1;
      }
      puVar3[2] = 5;
      puVar3[3] = 0;
      puVar3[4] = uVar2;
      puVar3[5] = 7;
      puVar3[0x2a] = 5;
      puVar3[0x2b] = 0;
      return 1;
    }
LAB_002ebf50:
    if (*(int *)(puVar3 + 0x38) == -1) {
      iVar8 = FUN_0033f428(0x113,0x49,0x2a,0x2a,0);
      if (iVar8 != 0) {
        if (*(int *)(DAT_002ebdb8 + 4) == 0) {
          cVar1 = *(char *)(DAT_002ec16c + 0x3a2);
        }
        else {
          cVar1 = *(char *)(DAT_002ec16c + 0x38a);
        }
        if (cVar1 != -1 || param_1 != 1) {
          FUN_002eb72c(0xb,1);
          puVar3[0x3c] = 5;
          puVar3[0x3d] = 0;
          puVar3[0x3e] = 1;
          puVar3[0x3f] = 0;
          puVar3[0x38] = 0xb;
          puVar3[0x39] = 0;
          puVar3[0x4a] = 5;
          puVar3[0x4b] = 0;
          puVar3[0x4c] = 1;
          puVar3[0x4d] = 0;
          return 0;
        }
        puVar3[0x3c] = 5;
        puVar3[0x3d] = 0;
        puVar3[0x3e] = 1;
        puVar3[0x3f] = 0;
        puVar3[0x4a] = 5;
        puVar3[0x4b] = 0;
        puVar3[0x4c] = 1;
        puVar3[0x4d] = 0;
        iVar8 = FUN_0033f238();
        if (iVar8 != 0) {
          FUN_0037547c(DAT_002ebdc4,0,4,DAT_002ebdc0,DAT_002ebdc0,DAT_002ebdbc);
        }
        uVar6 = 0xb;
        goto LAB_002ec2e8;
      }
    }
    else {
      iVar8 = FUN_0033f428(0x113,0x49,0x2a,0x2a,2);
      if ((iVar8 != 0) && (*(int *)(puVar3 + 0x38) == 0xb)) {
        if (param_1 == 1) {
          *puVar3 = 0x113;
          puVar3[1] = 0x49;
          puVar3[0x28] = 0xb;
          uVar17 = DAT_002ec174;
          uVar6 = DAT_002ec170;
          puVar3[0x29] = 0;
          *(undefined4 *)(puVar3 + 0x44) = *(undefined4 *)(puVar3 + 0x4a);
          *(undefined4 *)(puVar3 + 0x46) = *(undefined4 *)(puVar3 + 0x4c);
          FUN_002f7af4(uVar17,uVar6,*(undefined4 *)(DAT_002ebdcc + 4));
          puVar3[0x4a] = 0xffff;
          puVar3[0x4b] = 0xffff;
          puVar3[0x4c] = 0xffff;
          puVar3[0x4d] = 0xffff;
          return 1;
        }
        if (param_1 != 2) {
          return 1;
        }
        puVar3[2] = 5;
        puVar3[3] = 1;
        puVar3[4] = 0x113;
        puVar3[5] = 0x49;
        puVar3[0x2a] = 0xb;
        puVar3[0x2b] = 0;
        return 1;
      }
    }
    if (*(int *)(puVar3 + 0x38) == -1) {
      iVar8 = FUN_0033f428(0x107,0x7d,0x2a,0x2a,0);
      if (iVar8 != 0) {
        if (*(int *)(DAT_002ebdb8 + 4) == 0) {
          cVar1 = *(char *)(DAT_002ec178 + 0x3a2);
        }
        else {
          cVar1 = *(char *)(DAT_002ec178 + 0x38a);
        }
        if (cVar1 != -1 || param_1 != 1) {
          FUN_002eb72c(0x11,1);
          puVar3[0x3c] = 5;
          puVar3[0x3d] = 0;
          puVar3[0x3e] = 2;
          puVar3[0x3f] = 0;
          puVar3[0x38] = 0x11;
          puVar3[0x39] = 0;
          puVar3[0x4a] = 5;
          puVar3[0x4b] = 0;
          puVar3[0x4c] = 2;
          puVar3[0x4d] = 0;
          return 0;
        }
        puVar3[0x3c] = 5;
        puVar3[0x3d] = 0;
        puVar3[0x3e] = 2;
        puVar3[0x3f] = 0;
        puVar3[0x4a] = 5;
        puVar3[0x4b] = 0;
        puVar3[0x4c] = 2;
        puVar3[0x4d] = 0;
        iVar8 = FUN_0033f238();
        if (iVar8 != 0) {
          FUN_0037547c(DAT_002ebdc4,0,4,DAT_002ebdc0,DAT_002ebdc0,DAT_002ebdbc);
        }
        uVar6 = 0x11;
        goto LAB_002ec2e8;
      }
    }
    else {
      iVar8 = FUN_0033f428(0x107,0x7d,0x2a,0x2a,2);
      if ((iVar8 != 0) && (*(int *)(puVar3 + 0x38) == 0x11)) {
        if (param_1 == 1) {
          *puVar3 = 0x107;
          puVar3[1] = 0x7d;
          puVar3[0x28] = 0x11;
          uVar17 = DAT_002ec3d8;
          uVar6 = DAT_002ec3d4;
          puVar3[0x29] = 0;
          *(undefined4 *)(puVar3 + 0x44) = *(undefined4 *)(puVar3 + 0x4a);
          *(undefined4 *)(puVar3 + 0x46) = *(undefined4 *)(puVar3 + 0x4c);
          FUN_002f7af4(uVar17,uVar6,*(undefined4 *)(DAT_002ebdcc + 4));
          puVar3[0x4a] = 0xffff;
          puVar3[0x4b] = 0xffff;
          puVar3[0x4c] = 0xffff;
          puVar3[0x4d] = 0xffff;
          return 1;
        }
        if (param_1 != 2) {
          return 1;
        }
        puVar3[2] = 5;
        puVar3[3] = 2;
        puVar3[4] = 0x107;
        puVar3[5] = 0x7d;
        puVar3[0x2a] = 0x11;
        puVar3[0x2b] = 0;
        return 1;
      }
    }
    if (*(int *)(puVar3 + 0x38) == -1) {
      iVar8 = FUN_0033f428(uVar17,0xbf,0x2a,0x2a,0);
      if (iVar8 != 0) {
        if (*(int *)(DAT_002ebdb8 + 4) == 0) {
          cVar1 = *(char *)(DAT_002ec3dc + 0x3a2);
        }
        else {
          cVar1 = *(char *)(DAT_002ec3dc + 0x38a);
        }
        if (cVar1 != -1 || param_1 != 1) {
          FUN_002eb72c(0x17,1);
          puVar3[0x3c] = 5;
          puVar3[0x3d] = 0;
          puVar3[0x3e] = 3;
          puVar3[0x3f] = 0;
          puVar3[0x38] = 0x17;
          puVar3[0x39] = 0;
          puVar3[0x4a] = 5;
          puVar3[0x4b] = 0;
          puVar3[0x4c] = 3;
          puVar3[0x4d] = 0;
          return 0;
        }
        puVar3[0x3c] = 5;
        puVar3[0x3d] = 0;
        puVar3[0x3e] = 3;
        puVar3[0x3f] = 0;
        puVar3[0x4a] = 5;
        puVar3[0x4b] = 0;
        puVar3[0x4c] = 3;
        puVar3[0x4d] = 0;
        iVar8 = FUN_0033f238();
        if (iVar8 != 0) {
          FUN_0037547c(DAT_002ebdc4,0,4,DAT_002ebdc0,DAT_002ebdc0,DAT_002ebdbc);
        }
        uVar6 = 0x17;
        goto LAB_002ec2e8;
      }
    }
    else {
      iVar8 = FUN_0033f428(uVar17,0xbf,0x2a,0x2a,2);
      if ((iVar8 != 0) && (*(int *)(puVar3 + 0x38) == 0x17)) {
        if (param_1 == 1) {
          *puVar3 = uVar2;
          puVar3[1] = 0xbf;
          puVar3[0x28] = 0x17;
          uVar17 = DAT_002ec3e0;
          puVar3[0x29] = 0;
          *(undefined4 *)(puVar3 + 0x44) = *(undefined4 *)(puVar3 + 0x4a);
          *(undefined4 *)(puVar3 + 0x46) = *(undefined4 *)(puVar3 + 0x4c);
          FUN_002f7af4(uVar6,uVar17,*(undefined4 *)(DAT_002ebdcc + 4));
          puVar3[0x4a] = 0xffff;
          puVar3[0x4b] = 0xffff;
          puVar3[0x4c] = 0xffff;
          puVar3[0x4d] = 0xffff;
        }
        else if (param_1 == 2) {
          puVar3[2] = 5;
          puVar3[3] = 3;
          puVar3[4] = uVar2;
          puVar3[5] = 0xbf;
          puVar3[0x2a] = 0x17;
          puVar3[0x2b] = 0;
        }
        return 1;
      }
    }
    if (local_44[0] == '\0') {
      puVar3[0x38] = 0xffff;
      puVar3[0x39] = 0xffff;
    }
  }
  return 0;
}
