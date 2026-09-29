// OoT3D decomp @ 002d6628  name=FUN_002d6628  size=360

undefined4 FUN_002d6628(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_14 [4];
  char local_10;
  char local_f;

  if ((*(char *)(param_1 + 0x1a9) != '\x06') && (iVar3 = FUN_002bb884(param_1), iVar3 == 0)) {
    iVar3 = 0;
    pcVar4 = local_14;
    do {
      iVar5 = (uint)*(byte *)(param_1 + 0x222a) + iVar3 + 1;
      iVar6 = (int)((ulonglong)((longlong)DAT_002d6790 * (longlong)iVar5) >> 0x20);
      cVar1 = *(char *)(iVar5 + (iVar6 - (iVar6 >> 0x1f)) * -6 + param_1 + 0x222b);
      *pcVar4 = cVar1;
      if (cVar1 < 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      *pcVar4 = (char)((int)cVar1 << 1);
      pcVar4 = pcVar4 + 1;
    } while (iVar3 < 6);
    local_14[0] = local_14[0] - local_14[1];
    iVar3 = (int)local_14[0];
    iVar6 = *(int *)(DAT_002d6794 + 0x78);
    iVar5 = iVar3;
    if (iVar3 < 0) {
      iVar5 = -iVar3;
    }
    if (iVar6 <= iVar5) {
      iVar5 = (int)(char)(local_14[1] - local_14[2]);
      iVar7 = iVar5;
      if (iVar5 < 0) {
        iVar7 = -iVar5;
      }
      if (iVar6 <= iVar7) {
        iVar5 = (int)(short)(char)(local_14[1] - local_14[2]) * (int)(short)local_14[0];
      }
      iVar2 = iVar7 - iVar6;
      if (iVar7 >= iVar6) {
        iVar2 = iVar5;
      }
      if (iVar2 < 0 == (iVar7 < iVar6 && SBORROW4(iVar7,iVar6))) {
        iVar5 = (int)(char)(local_14[2] - local_14[3]);
        iVar7 = iVar5;
        if (iVar5 < 0) {
          iVar7 = -iVar5;
        }
        if (iVar6 <= iVar7) {
          iVar5 = (int)(short)(char)(local_14[2] - local_14[3]) * (int)(short)local_14[0];
        }
        iVar2 = iVar7 - iVar6;
        if (iVar7 >= iVar6) {
          iVar2 = iVar5;
        }
        if (iVar2 < 0 == (iVar7 < iVar6 && SBORROW4(iVar7,iVar6))) {
          iVar5 = (int)(char)(local_14[3] - local_10);
          iVar7 = iVar5;
          if (iVar5 < 0) {
            iVar7 = -iVar5;
          }
          if (iVar6 <= iVar7) {
            iVar5 = (int)(short)(char)(local_14[3] - local_10) * (int)(short)local_14[0];
          }
          iVar2 = iVar7 - iVar6;
          if (iVar7 >= iVar6) {
            iVar2 = iVar5;
          }
          if (iVar2 < 0 == (iVar7 < iVar6 && SBORROW4(iVar7,iVar6))) {
            iVar5 = (int)(char)(local_10 - local_f);
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (iVar6 <= iVar5) {
              iVar3 = (int)(short)(char)(local_10 - local_f) * (int)(short)local_14[0];
            }
            iVar7 = iVar5 - iVar6;
            if (iVar5 >= iVar6) {
              iVar7 = iVar3;
            }
            if (iVar7 < 0 == (iVar5 < iVar6 && SBORROW4(iVar5,iVar6))) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}
