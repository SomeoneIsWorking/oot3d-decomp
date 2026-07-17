// OoT3D decomp @ 002c41c4  name=FUN_002c41c4  size=404

/* WARNING: Removing unreachable block (ram,0x00338980) */
/* WARNING: Removing unreachable block (ram,0x00338978) */
/* WARNING: Removing unreachable block (ram,0x00338984) */

int FUN_002c41c4(int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  iVar5 = iRam003389d8;
  if (param_2 == -1) {
    param_2 = (int)*(short *)(iRam002c41e0 + param_1);
  }
  iVar4 = *(int *)(param_1 + param_2 * 4 + 0xa54);
  if (*pcRam003389d4 == '\0') {
    iVar5 = (int)*(short *)(iVar4 + 0x18a);
  }
  else {
    uVar2 = *(ushort *)(iVar4 + 0x192);
    if (((uVar2 & 1) == 0) ||
       ((*(uint *)(iRam003389d8 + *(short *)(iVar4 + 0x18a) * 8) & 0xf000000) >> 0x18 <
        (*(uint *)(iRam003389d8 + param_3 * 8) & 0xf000000) >> 0x18)) {
      if ((param_3 != 0x35 && param_3 != 0x36) ||
         ((*(int *)(iRam003389dc + 4) != 0 || (*(short *)(*(int *)(iVar4 + 0xd4) + 0x104) != 0x56)))
         ) {
        iVar1 = param_3;
        if (param_3 != 0) {
          iVar1 = param_3 + -0x4e;
        }
        if (iVar1 < 0 != (param_3 != 0 && SBORROW4(param_3,0x4e))) {
          sVar3 = *(short *)(iVar4 + 0x18a);
          *(ushort *)(iVar4 + 0x192) = uVar2 | 0x10;
          if (sVar3 != param_3) {
            *(ushort *)(iVar4 + 0x192) = uVar2 | 0x11;
            *(ushort *)(iVar4 + 0x194) = *(ushort *)(iVar4 + 0x194) & 0xeff7 | 4;
            puVar6 = (uint *)(iVar5 + sVar3 * 8);
            if ((*puVar6 & 0x40000000) == 0) {
              *(short *)(iVar4 + 0x19c) = sVar3;
            }
            if ((*puVar6 & 0x40000000) == 0) {
              *(undefined2 *)(iVar4 + 0x1ae) = *(undefined2 *)(iVar4 + 400);
            }
            *(undefined2 *)(iVar4 + 400) = 0xffff;
            *(short *)(iVar4 + 0x18a) = (short)param_3;
            iVar5 = func_0x0033228c(iVar4,(int)*(short *)(iVar4 + 0x18c),1);
            if (-1 < iVar5) {
              func_0x002c0a9c(iVar4,(int)*(short *)(iVar4 + 0x18c));
            }
            return param_3;
          }
          *(ushort *)(iVar4 + 0x192) = uVar2 | 0x11;
          return -1;
        }
        return -99;
      }
      *(ushort *)(iVar4 + 0x192) = uVar2 | 0x10;
      iVar5 = -5;
    }
    else {
      *(ushort *)(iVar4 + 0x192) = uVar2 | 0x10;
      iVar5 = -2;
    }
  }
  return iVar5;
}

