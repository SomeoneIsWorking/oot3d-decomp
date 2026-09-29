// OoT3D decomp @ 002db234  name=FUN_002db234  size=988

/* WARNING: Type propagation algorithm not settling */

uint FUN_002db234(int *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  switch(*param_1) {
  case 1000:
    uVar2 = (uint)*(ushort *)(DAT_002db360 + param_1[1] * 2 + 0xeec) & 1 << (param_1[2] & 0xffU);
    break;
  case 0x3e9:
    uVar2 = (uint)*(ushort *)(DAT_002db360 + param_1[1] * 2 + 0xf08) & 1 << (param_1[2] & 0xffU);
    break;
  case 0x3ea:
    uVar2 = (uint)*(ushort *)(DAT_002db360 + param_1[1] * 2 + 0xf10) & 1 << (param_1[2] & 0xffU);
    break;
  case 0x3eb:
    uVar2 = param_1[1];
    if ((int)uVar2 < 0x38) {
      uVar3 = (uint)*(byte *)((uint)*(byte *)(DAT_00469e48 + uVar2) + DAT_00469e4c);
joined_r0x00469d34:
      if (uVar3 != uVar2) {
        return 0;
      }
      return 1;
    }
    if (uVar2 - 0x38 < 3) {
      uVar3 = (uint)*(byte *)((uint)*(byte *)(DAT_00469e48 + 3) + DAT_00469e4c);
      goto joined_r0x00469d34;
    }
    uVar3 = (uint)*(ushort *)(DAT_00469e50 + 0xb6);
    iVar4 = DAT_00469e54 + uVar2 * 4;
    if (uVar2 - 0x3b < 3) {
      uVar3 = uVar3 & *(int *)(iVar4 + -0xec) << *DAT_00469e58;
      goto joined_r0x00469e00;
    }
    if (uVar2 - 0x3e < 3) {
      uVar2 = *(int *)(iVar4 + -0xf8) << DAT_00469e58[1];
    }
    else {
      if (2 < uVar2 - 0x41) {
        if (uVar2 - 0x44 < 3) {
          uVar3 = uVar3 & *(int *)(iVar4 + -0x110) << DAT_00469e58[3];
          goto joined_r0x00469e00;
        }
        uVar3 = *(uint *)(DAT_00469e50 + 0xb8);
        if (uVar2 - 0x47 < 3) {
          uVar3 = ((int)(DAT_00469e5c[5] & uVar3) >> DAT_00469e60[5]) + 0x46;
          goto joined_r0x00469d34;
        }
        if (uVar2 - 0x4a < 3) {
          uVar3 = ((int)(*DAT_00469e5c & uVar3) >> *DAT_00469e60) + 0x49;
          goto joined_r0x00469d34;
        }
        if (uVar2 - 0x4d < 3) {
          uVar3 = ((int)(DAT_00469e5c[1] & uVar3) >> DAT_00469e60[1]) + 0x4c;
          goto joined_r0x00469d34;
        }
        if (uVar2 - 0x50 < 3) {
          uVar3 = ((int)(DAT_00469e5c[2] & uVar3) >> DAT_00469e60[2]) + 0x4f;
          goto joined_r0x00469d34;
        }
        if (uVar2 - 0x53 < 2) {
          uVar3 = ((int)(DAT_00469e5c[3] & uVar3) >> DAT_00469e60[3]) + 0x52;
          goto joined_r0x00469d34;
        }
        if (uVar2 - 0x56 < 2) {
          uVar3 = ((int)(DAT_00469e5c[4] & uVar3) >> DAT_00469e60[4]) + 0x55;
          goto joined_r0x00469d34;
        }
        if (uVar2 - 0x98 < 2) {
          uVar3 = ((int)(DAT_00469e5c[6] & uVar3) >> DAT_00469e60[6]) + 0x97;
          goto joined_r0x00469d34;
        }
        if (uVar2 - 0x9a < 2) {
          uVar3 = ((int)(DAT_00469e5c[7] & uVar3) >> DAT_00469e60[7]) + 0x99;
          goto joined_r0x00469d34;
        }
        uVar3 = *(uint *)(DAT_00469e50 + 0xbc);
        if (uVar2 - 0x5a < 0xc) {
          uVar3 = *(uint *)(iVar4 + -0x150) & uVar3;
        }
        else {
          if (uVar2 - 0x66 < 6) {
            uVar2 = *(uint *)(iVar4 + -0x198);
          }
          else {
            if (2 < uVar2 - 0x6c) {
              if (2 < uVar2 - 0x6f) {
                return 0;
              }
              uVar3 = *(uint *)(iVar4 + -0x168) & uVar3;
              goto joined_r0x00469e00;
            }
            uVar2 = *(uint *)(iVar4 + -0x168);
          }
          uVar3 = uVar2 & uVar3;
        }
        goto joined_r0x00469e00;
      }
      uVar2 = *(int *)(iVar4 + -0x104) << DAT_00469e58[2];
    }
    uVar3 = uVar3 & uVar2;
joined_r0x00469e00:
    if (uVar3 == 0) {
      return 0;
    }
    return 1;
  case 0x3ec:
    uVar2 = *(uint *)(DAT_002db364 + DAT_002db360) & 1 << (param_1[2] & 0xffU);
    break;
  case 0x3ed:
    return (*(uint *)(DAT_002db364 + DAT_002db360) & 4) >> 2;
  case 0x3ee:
    cVar1 = *(char *)(DAT_002db360 + 0x4e);
    goto joined_r0x002db330;
  case 0x3ef:
    cVar1 = *(char *)(DAT_002db360 + 0x50);
    goto joined_r0x002db330;
  case 0x3f0:
    cVar1 = *(char *)(DAT_002db360 + 0x51);
joined_r0x002db330:
    if (cVar1 != '\0') {
      return 1;
    }
    return 0;
  default:
    uVar2 = *(uint *)(DAT_002db360 + *param_1 * 0x1c + param_1[1] * 4 + 0xec) &
            1 << (param_1[2] & 0xffU);
  }
  if (uVar2 != 0) {
    return 1;
  }
  return 0;
}
