// OoT3D decomp @ 00338864  name=FUN_00338864  size=368

int FUN_00338864(int param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;

  iVar4 = DAT_003389d8;
  if (*DAT_003389d4 == '\0') {
    iVar4 = (int)*(short *)(param_1 + 0x18a);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x192);
    if (((uVar2 & 1) == 0) ||
       ((*(uint *)(DAT_003389d8 + *(short *)(param_1 + 0x18a) * 8) & 0xf000000) >> 0x18 <
        (*(uint *)(DAT_003389d8 + param_2 * 8) & 0xf000000) >> 0x18)) {
      if ((param_2 != 0x35 && param_2 != 0x36) ||
         ((*(int *)(DAT_003389dc + 4) != 0 || (*(short *)(*(int *)(param_1 + 0xd4) + 0x104) != 0x56)
          ))) {
        iVar1 = param_2;
        if (param_2 != 0) {
          iVar1 = param_2 + -0x4e;
        }
        if (iVar1 < 0 == (param_2 != 0 && SBORROW4(param_2,0x4e))) {
          return -99;
        }
        sVar3 = *(short *)(param_1 + 0x18a);
        *(ushort *)(param_1 + 0x192) = uVar2 | 0x10;
        if (sVar3 != param_2 || (param_3 & 1) != 0) {
          if ((param_3 & 2) == 0) {
            *(ushort *)(param_1 + 0x192) = uVar2 | 0x11;
          }
          *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xeff7 | 4;
          puVar5 = (uint *)(iVar4 + sVar3 * 8);
          if ((*puVar5 & 0x40000000) == 0) {
            *(short *)(param_1 + 0x19c) = sVar3;
          }
          if ((param_3 & 8) == 0) {
            if ((param_3 & 4) == 0) {
              if ((*puVar5 & 0x40000000) == 0) {
                *(undefined2 *)(param_1 + 0x1ae) = *(undefined2 *)(param_1 + 400);
              }
              *(undefined2 *)(param_1 + 400) = 0xffff;
            }
          }
          else {
            *(undefined2 *)(param_1 + 400) = *(undefined2 *)(param_1 + 0x1ae);
            *(undefined2 *)(param_1 + 0x1ae) = 0xffff;
          }
          *(short *)(param_1 + 0x18a) = (short)param_2;
          iVar4 = FUN_0033228c(param_1,(int)*(short *)(param_1 + 0x18c),1);
          if (-1 < iVar4) {
            FUN_002c0a9c(param_1,(int)*(short *)(param_1 + 0x18c));
          }
          return param_2;
        }
        if ((param_3 & 2) == 0) {
          *(ushort *)(param_1 + 0x192) = uVar2 | 0x11;
        }
        return -1;
      }
      *(ushort *)(param_1 + 0x192) = uVar2 | 0x10;
      iVar4 = -5;
    }
    else {
      *(ushort *)(param_1 + 0x192) = uVar2 | 0x10;
      iVar4 = -2;
    }
  }
  return iVar4;
}
