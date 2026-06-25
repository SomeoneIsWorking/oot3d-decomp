// OoT3D decomp @ 0033885c  name=FUN_0033885c  size=8

/* WARNING: Removing unreachable block (ram,0x00338980) */
/* WARNING: Removing unreachable block (ram,0x00338978) */
/* WARNING: Removing unreachable block (ram,0x00338984) */

int FUN_0033885c(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  
  iVar3 = DAT_003389d8;
  if (*DAT_003389d4 == '\0') {
    iVar3 = (int)*(short *)(param_1 + 0x18a);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x192);
    if (((uVar1 & 1) == 0) ||
       ((*(uint *)(DAT_003389d8 + *(short *)(param_1 + 0x18a) * 8) & 0xf000000) >> 0x18 <
        (*(uint *)(DAT_003389d8 + param_2 * 8) & 0xf000000) >> 0x18)) {
      if ((param_2 != 0x35 && param_2 != 0x36) ||
         ((*(int *)(DAT_003389dc + 4) != 0 || (*(short *)(*(int *)(param_1 + 0xd4) + 0x104) != 0x56)
          ))) {
        bVar5 = param_2 < 0;
        if (param_2 != 0) {
          bVar5 = param_2 + -0x4e < 0;
        }
        if (bVar5 != (param_2 != 0 && SBORROW4(param_2,0x4e))) {
          sVar2 = *(short *)(param_1 + 0x18a);
          *(ushort *)(param_1 + 0x192) = uVar1 | 0x10;
          if (sVar2 != param_2) {
            *(ushort *)(param_1 + 0x192) = uVar1 | 0x11;
            *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xeff7 | 4;
            puVar4 = (uint *)(iVar3 + sVar2 * 8);
            if ((*puVar4 & 0x40000000) == 0) {
              *(short *)(param_1 + 0x19c) = sVar2;
            }
            if ((*puVar4 & 0x40000000) == 0) {
              *(undefined2 *)(param_1 + 0x1ae) = *(undefined2 *)(param_1 + 400);
            }
            *(undefined2 *)(param_1 + 400) = 0xffff;
            *(short *)(param_1 + 0x18a) = (short)param_2;
            iVar3 = FUN_0033228c(param_1,(int)*(short *)(param_1 + 0x18c),1);
            if (-1 < iVar3) {
              FUN_002c0a9c(param_1,(int)*(short *)(param_1 + 0x18c));
            }
            return param_2;
          }
          *(ushort *)(param_1 + 0x192) = uVar1 | 0x11;
          return -1;
        }
        return -99;
      }
      *(ushort *)(param_1 + 0x192) = uVar1 | 0x10;
      iVar3 = -5;
    }
    else {
      *(ushort *)(param_1 + 0x192) = uVar1 | 0x10;
      iVar3 = -2;
    }
  }
  return iVar3;
}

