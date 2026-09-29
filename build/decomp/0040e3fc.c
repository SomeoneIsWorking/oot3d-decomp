// OoT3D decomp @ 0040e3fc  name=FUN_0040e3fc  size=2032

ushort * FUN_0040e3fc(ushort *param_1,ushort *param_2,uint param_3,ushort *param_4,uint param_5)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  undefined6 uVar13;

  puVar7 = DAT_0040e808;
  puVar6 = param_2 + 0xe;
  iVar10 = *(int *)(param_2 + 0x60);
  uVar1 = (ushort)param_5;
  if (0xff < param_3) {
    if (0xffff < param_3) {
      return param_1;
    }
    uVar8 = param_3 & 0xff;
    puVar6 = (ushort *)(param_3 & 0xf0);
    puVar7 = (ushort *)0x0;
    if (puVar6 == (ushort *)0x80 || puVar6 == (ushort *)0x90) {
      if ((int)param_4 < 0x20) {
        puVar6 = (ushort *)FUN_00304270(iVar10,param_4);
      }
      else if ((int)param_4 < 0x30) {
        puVar6 = (ushort *)FUN_00308f80(param_2,param_4 + -0x10);
      }
      else {
        puVar6 = (ushort *)0x0;
      }
      puVar7 = puVar6;
      if (puVar6 == (ushort *)0x0) {
        return (ushort *)0x0;
      }
    }
    if (uVar8 == 0x89) {
      puVar6 = (ushort *)(*puVar7 ^ param_5);
LAB_0040eb90:
      *puVar7 = (ushort)puVar6;
      return puVar6;
    }
    if (uVar8 < 0x8a) {
      puVar6 = (ushort *)-param_5;
      switch(uVar8) {
      case 0x80:
        *puVar7 = uVar1;
        return puVar6;
      case 0x81:
        puVar6 = (ushort *)((int)(short)*puVar7 + (int)(short)uVar1);
        break;
      case 0x82:
        puVar6 = (ushort *)((uint)*puVar7 - (int)(short)uVar1);
        break;
      case 0x83:
        puVar6 = (ushort *)((uint)*puVar7 * (int)(short)uVar1);
        break;
      case 0x84:
        if (param_5 == 0) {
          return (ushort *)0x0;
        }
        puVar6 = (ushort *)FUN_00368d94((int)(short)*puVar7);
        break;
      case 0x85:
        if ((int)param_5 < 0) {
          puVar6 = (ushort *)((int)(short)*puVar7 >> ((uint)puVar6 & 0xff));
        }
        else {
          puVar6 = (ushort *)((uint)*puVar7 << (param_5 & 0xff));
        }
        break;
      case 0x86:
        bVar11 = (int)param_5 < 0;
        if (bVar11) {
          param_5 = (uint)(short)puVar6;
        }
        iVar10 = FUN_00304200();
        puVar6 = (ushort *)((int)(iVar10 * (param_5 + 1)) >> 0x10);
        if (bVar11) {
          puVar6 = (ushort *)-(int)puVar6;
        }
        break;
      case 0x87:
        puVar6 = (ushort *)(*puVar7 & param_5);
        break;
      case 0x88:
        puVar6 = (ushort *)(*puVar7 | param_5);
        break;
      default:
        return puVar6;
      }
      goto LAB_0040eb90;
    }
    if (uVar8 == 0x92) {
      if ((int)(short)*puVar7 <= (int)param_5) goto LAB_0040ec50;
    }
    else if (uVar8 < 0x93) {
      if (uVar8 == 0x8a) {
        puVar6 = (ushort *)~param_5;
        goto LAB_0040eb90;
      }
      if (uVar8 == 0x8b) {
        if (param_5 == 0) {
          return puVar6;
        }
        uVar13 = FUN_00368d94((int)(short)*puVar7,param_5);
        *puVar7 = (ushort)((uint6)uVar13 >> 0x20);
        return (ushort *)uVar13;
      }
      if (uVar8 == 0x90) {
        if ((int)(short)*puVar7 != param_5) goto LAB_0040ec50;
      }
      else {
        if (uVar8 != 0x91) {
          return puVar6;
        }
        if ((int)(short)*puVar7 < (int)param_5) {
LAB_0040ec50:
          puVar7 = (ushort *)0x0;
          goto LAB_0040ec54;
        }
      }
    }
    else if (uVar8 == 0x93) {
      if ((int)param_5 < (int)(short)*puVar7) goto LAB_0040ec50;
    }
    else if (uVar8 == 0x94) {
      if ((int)param_5 <= (int)(short)*puVar7) goto LAB_0040ec50;
    }
    else {
      if (uVar8 != 0x95) {
        if (uVar8 != 0xe0) {
          return puVar6;
        }
        puVar7 = (ushort *)FUN_00407740(iVar10,(uint)param_4 & 0xffff,param_2);
        return puVar7;
      }
      if ((int)(short)*puVar7 == param_5) goto LAB_0040ec50;
    }
    puVar7 = (ushort *)0x1;
LAB_0040ec54:
    *(char *)(param_2 + 0x12) = (char)puVar7;
    return puVar7;
  }
  puVar5 = (ushort *)((uint)param_4 & 0xff);
  bVar9 = (byte)param_4;
  if (param_3 == 0xcc) {
    *(byte *)(param_2 + 0x32) = bVar9;
    return puVar5;
  }
  bVar2 = (byte)(param_4 + -0x20);
  if (0xcc < (int)param_3) {
    if (param_3 == 0xd9) {
      *(byte *)((int)param_2 + 0x93) = bVar9;
      return puVar5;
    }
    if (0xd9 < (int)param_3) {
      if (param_3 == 0xe0) {
        *(ushort **)(param_2 + 0x2e) = (ushort *)((int)param_4 * 5);
        return (ushort *)((int)param_4 * 5);
      }
      if ((int)param_3 < 0xe1) {
        switch(param_3) {
        case 0xda:
          *(byte *)(param_2 + 0x4a) = bVar9;
          return puVar5;
        case 0xdb:
          *(byte *)(param_2 + 0x49) = bVar9;
          return puVar5;
        case 0xdc:
          *(byte *)((int)param_2 + 0x87) = bVar2;
          return puVar5;
        case 0xdd:
          puVar7 = (ushort *)FUN_00405fa0(param_2,(uint)param_4 & 0xff);
          return puVar7;
        case 0xde:
          return puVar5;
        case 0xdf:
          *(bool *)(param_2 + 0x26) = &IRQ <= puVar5;
          return (ushort *)(uint)(&IRQ <= puVar5);
        default:
          return puVar5;
        }
      }
      if (param_3 == 0xfb) {
        *(undefined1 *)(param_2 + 0x46) = 0xff;
        *(undefined1 *)((int)param_2 + 0x8d) = 0xff;
        *(undefined1 *)(param_2 + 0x47) = 0xff;
        *(undefined1 *)((int)param_2 + 0x8f) = 0xff;
        param_2[0x48] = 0xff;
        return (ushort *)0xff;
      }
      if ((int)param_3 < 0xfc) {
        if (param_3 == 0xe1) {
          puVar6 = DAT_0040e808;
          if (((int)param_4 <= (int)DAT_0040e808) && (puVar6 = param_4, (int)param_4 < 0)) {
            puVar6 = (ushort *)0x0;
          }
          *(short *)(iVar10 + 0x70) = (short)puVar6;
          return puVar7;
        }
        if (param_3 != 0xe3) {
          return puVar5;
        }
        fVar12 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_2 + 0x34) = fVar12 * DAT_0040e804;
        return puVar5;
      }
      if (param_3 != 0xfc) {
        if (param_3 != 0xfd) {
          return puVar5;
        }
        puVar7 = (ushort *)0x0;
        if ((char)param_2[0x20] == '\0') {
          return (ushort *)0x0;
        }
        do {
          bVar9 = (char)param_2[0x20] - 1;
          *(byte *)(param_2 + 0x20) = bVar9;
          if ((char)puVar6[(uint)bVar9 * 4 + 6] == '\0') {
            puVar5 = puVar6 + (uint)(byte)param_2[0x20] * 4;
            puVar7 = puVar5 + 6;
            break;
          }
          puVar5 = (ushort *)0x0;
        } while (bVar9 != 0);
        if (puVar7 == (ushort *)0x0) {
          return puVar5;
        }
        param_4 = *(ushort **)(puVar7 + 2);
LAB_0040e9b4:
        *(ushort **)(param_2 + 0x10) = param_4;
        return param_4;
      }
      uVar8 = (uint)(byte)param_2[0x20];
      if (uVar8 == 0) {
        return puVar5;
      }
      if ((char)puVar6[uVar8 * 4 + 2] == '\0') {
        return (ushort *)0x0;
      }
      cVar4 = *(char *)((int)puVar6 + uVar8 * 8 + 5);
      if ((cVar4 == '\0') || (cVar4 = cVar4 + -1, cVar4 != '\0')) {
        *(char *)((int)puVar6 + uVar8 * 8 + 5) = cVar4;
        puVar7 = *(ushort **)(puVar6 + uVar8 * 4 + 4);
        *(ushort **)(param_2 + 0x10) = puVar7;
        return puVar7;
      }
      puVar7 = (ushort *)(uVar8 - 1);
LAB_0040ea28:
      *(char *)(param_2 + 0x20) = (char)puVar7;
      return puVar7;
    }
    switch(param_3) {
    case 0xcd:
      *(byte *)(param_2 + 0x30) = bVar9;
      return puVar5;
    case 0xce:
      *(bool *)((int)param_2 + 0x4b) = param_4 != (ushort *)0x0;
      return (ushort *)(uint)(param_4 != (ushort *)0x0);
    case 0xcf:
      *(byte *)((int)param_2 + 0x8b) = bVar9;
      return puVar5;
    case 0xd0:
      *(byte *)(param_2 + 0x46) = bVar9;
      return puVar5;
    case 0xd1:
      *(byte *)((int)param_2 + 0x8d) = bVar9;
      return puVar5;
    case 0xd2:
      *(byte *)(param_2 + 0x47) = bVar9;
      return puVar5;
    case 0xd3:
      *(byte *)((int)param_2 + 0x8f) = bVar9;
      return puVar5;
    case 0xd4:
      uVar8 = (uint)(byte)param_2[0x20];
      if (uVar8 < 3) {
        *(undefined4 *)(puVar6 + uVar8 * 4 + 8) = *(undefined4 *)(param_2 + 0x10);
        *(byte *)((int)puVar6 + uVar8 * 8 + 0xd) = bVar9;
        *(undefined1 *)(puVar6 + uVar8 * 4 + 6) = 1;
        puVar7 = (ushort *)((byte)param_2[0x20] + 1);
        goto LAB_0040ea28;
      }
      break;
    case 0xd5:
      *(byte *)(param_2 + 0x42) = bVar9;
      return puVar5;
    case 0xd6:
      puVar5 = (ushort *)(uint)*DAT_0040eb70;
      if (puVar5 != (ushort *)0x0) {
        if ((int)param_4 < 0x20) {
          if ((int)param_4 < 0x10) {
            puVar7 = (ushort *)(iVar10 + (int)param_4 * 2 + 0xc4);
          }
          else if ((int)param_4 < 0x20) {
            puVar7 = (ushort *)(DAT_00304298 + (int)param_4 * 2 + -0x20);
          }
          else {
            puVar7 = (ushort *)0x0;
          }
          return puVar7;
        }
        if ((int)param_4 < 0x30) {
          puVar7 = (ushort *)FUN_00308f80(param_2,param_4 + -0x10);
          return puVar7;
        }
      }
      break;
    case 0xd7:
      puVar7 = param_2 + 0x3c;
      iVar10 = (int)(short)param_2[0x3e];
      if (iVar10 < (short)param_2[0x3d]) goto LAB_0040e734;
      goto LAB_0040e72c;
    case 0xd8:
      fVar12 = (float)VectorSignedToFloat(param_4 + -0x20,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 0x4c) = fVar12 * DAT_0040e804;
      return puVar5;
    default:
      return puVar5;
    }
    return puVar5;
  }
  if (param_3 != 0xc0) {
    if ((int)param_3 < 0xc1) {
      if (param_3 != 0xb2) {
        if (0xb2 < (int)param_3) {
          if (param_3 == 0xb5) {
            fVar12 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
            *(float *)(param_2 + 0x4e) = fVar12 * DAT_0040eb6c;
            return puVar5;
          }
          if ((int)param_3 < 0xb6) {
            if (param_3 != 0xb3) {
              if (param_3 == 0xb4) {
                *(byte *)((int)param_2 + 0x95) = bVar9;
              }
              return puVar5;
            }
            *(byte *)((int)param_2 + 0x85) = bVar9;
            return puVar5;
          }
          if (param_3 == 0xb6) {
            *(byte *)((int)param_2 + 0x4d) = bVar9;
            return puVar5;
          }
          if (param_3 != 0xbf) {
            return puVar5;
          }
          *(bool *)((int)param_2 + 0x41) = param_4 != (ushort *)0x0;
          return (ushort *)(uint)(param_4 != (ushort *)0x0);
        }
        if (param_3 == 0x8a) {
          puVar7 = (ushort *)(uint)(byte)param_2[0x20];
          if ((ushort *)0x2 < puVar7) {
            return puVar7;
          }
          *(undefined4 *)(puVar6 + (int)puVar7 * 4 + 8) = *(undefined4 *)(param_2 + 0x10);
          *(undefined1 *)(puVar6 + (int)puVar7 * 4 + 6) = 0;
          *(char *)(param_2 + 0x20) = (char)param_2[0x20] + '\x01';
        }
        else {
          if (0x8a < (int)param_3) {
            if (param_3 == 0xb0) {
              *(byte *)(iVar10 + 0x6e) = bVar9;
              return puVar5;
            }
            if (param_3 != 0xb1) {
              return puVar5;
            }
            param_2[0x48] = (ushort)puVar5;
            return puVar5;
          }
          if (param_3 == 0x81) {
            if ((int)param_4 < 0x10000) {
              puVar5 = (ushort *)((uint)param_4 & 0xffff);
              *(ushort **)(param_2 + 0x28) = puVar5;
            }
            return puVar5;
          }
          if (param_3 == 0x88) {
            puVar7 = (ushort *)FUN_0030425c(iVar10,param_4);
            if (puVar7 == (ushort *)0x0 || puVar7 == param_2) {
              return puVar7;
            }
            FUN_00308f94(puVar7);
            FUN_0030424c(puVar7,*(int *)puVar6,param_5);
            *(undefined1 *)(puVar7 + 0x25) = 0;
            *(undefined1 *)(puVar7 + 0x20) = 0;
            puVar7[0x22] = 0;
            puVar7[0x23] = 0;
            *(undefined1 *)((int)puVar7 + 5) = 1;
            return puVar7;
          }
          if (param_3 != 0x89) {
            return puVar5;
          }
        }
        param_4 = (ushort *)(*(int *)puVar6 + (int)param_4);
        goto LAB_0040e9b4;
      }
      *(bool *)((int)param_2 + 0x27) = param_4 != (ushort *)0x0;
      if (param_4 == (ushort *)0x0) {
        return (ushort *)0x0;
      }
LAB_0040e838:
      FUN_00308eb0(param_2,0xffffffff);
      puVar7 = (ushort *)FUN_00308e7c(param_2);
      return puVar7;
    }
    switch(param_3) {
    case 0xc1:
      puVar7 = param_2 + 0x36;
      if ((int)(short)param_2[0x38] < (int)(short)param_2[0x37]) {
        uVar3 = *puVar7;
        iVar10 = FUN_00368d94(((uint)*(byte *)((int)param_2 + 0x6d) - (uint)(byte)uVar3) *
                              (int)(short)param_2[0x38]);
        puVar6 = (ushort *)(iVar10 + (uint)(byte)uVar3 & 0xff);
      }
      else {
        puVar6 = (ushort *)(uint)*(byte *)((int)param_2 + 0x6d);
      }
      goto LAB_0040e68c;
    case 0xc2:
      *(byte *)(iVar10 + 0x6c) = bVar9;
      return puVar5;
    case 0xc3:
      *(byte *)(param_2 + 0x44) = bVar9;
      return puVar5;
    case 0xc4:
      goto switchD_0040e4e8_caseD_c4;
    case 0xc5:
      *(byte *)(param_2 + 0x43) = bVar9;
      return puVar5;
    case 0xc6:
      *(byte *)((int)param_2 + 0x89) = bVar9;
      return puVar5;
    case 199:
      *(bool *)((int)param_2 + 0x25) = param_4 != (ushort *)0x0;
      return (ushort *)(uint)(param_4 != (ushort *)0x0);
    case 200:
      *(bool *)(param_2 + 0x13) = param_4 != (ushort *)0x0;
      goto LAB_0040e838;
    case 0xc9:
      *(byte *)(param_2 + 0x45) = (char)param_2[0x44] + bVar9;
      *(undefined1 *)((int)param_2 + 0x4b) = 1;
      return (ushort *)0x1;
    case 0xca:
      fVar12 = (float)VectorUnsignedToFloat(puVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 0x2a) = fVar12 * DAT_0040e80c;
      return puVar5;
    case 0xcb:
      fVar12 = (float)VectorUnsignedToFloat(puVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 0x2c) = fVar12 * DAT_0040e810;
      return puVar5;
    default:
      return puVar5;
    }
  }
  puVar7 = param_2 + 0x39;
  iVar10 = (int)(short)param_2[0x3b];
  bVar9 = bVar2;
  if (iVar10 < (short)param_2[0x3a]) {
LAB_0040e734:
    uVar3 = *puVar7;
    cVar4 = FUN_00368d94(((int)(char)*(byte *)((int)puVar7 + 1) - (int)(char)(byte)uVar3) * iVar10);
    puVar6 = (ushort *)(int)(char)(cVar4 + (byte)uVar3);
    goto LAB_0040e68c;
  }
LAB_0040e72c:
  puVar6 = (ushort *)(int)(char)*(byte *)((int)puVar7 + 1);
LAB_0040e68c:
  *(byte *)puVar7 = (byte)puVar6;
  *(byte *)((int)puVar7 + 1) = bVar9;
  puVar7[1] = uVar1;
  puVar7[2] = 0;
  return puVar6;
switchD_0040e4e8_caseD_c4:
  puVar7 = param_2 + 0x3f;
  iVar10 = (int)(short)param_2[0x41];
  if (iVar10 < (short)param_2[0x40]) goto LAB_0040e734;
  goto LAB_0040e72c;
}
