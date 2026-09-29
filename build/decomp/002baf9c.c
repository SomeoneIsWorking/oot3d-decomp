// OoT3D decomp @ 002baf9c  name=FUN_002baf9c  size=560

undefined4 FUN_002baf9c(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  int local_28;
  byte local_24;

  iVar5 = 0;
  iVar6 = 0;
  if (*(uint *)(param_1 + 0x1a8) < *(uint *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 700) != 0) {
      iVar5 = 0x20;
    }
    bVar8 = *(char *)(param_1 + 0x18) != '\0';
    iVar2 = 0;
    if (bVar8) {
      iVar2 = *(int *)(param_1 + 0x14);
    }
    if (bVar8 && iVar2 != 0) {
      iVar6 = FUN_002da7c8();
      iVar6 = iVar6 + *(int *)(param_1 + 0xe8);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    iVar2 = FUN_002d2674(uVar7,param_2,&local_28);
    if (iVar2 == 0) {
      uVar3 = FUN_002d2664(uVar7);
      iVar2 = FUN_002d2674(uVar7,uVar3,&local_28);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (local_28 != 0) {
      fVar9 = *(float *)(param_1 + 0x110);
      fVar10 = *(float *)(param_1 + 0x1a4);
      iVar5 = (*(int *)(param_1 + 0x100) + *(int *)(param_1 + 0x19c) + iVar5) - (uint)local_24;
      iVar6 = iVar6 + *(int *)(param_1 + 0x104) + *(int *)(param_1 + 0x1a0);
      cVar1 = *(char *)(param_1 + 0x19);
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          if ((0xff < param_2) &&
             (param_2 = FUN_002d2664(*(undefined4 *)(param_1 + 0x10)), 0xff < param_2)) {
            param_2 = 0x2a;
          }
          iVar2 = FUN_002da7d8(*(undefined4 *)(param_1 + 0x10));
          iVar4 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x10));
          FUN_002b7234(fVar9 + fVar10,param_1,iVar5,iVar6,iVar2,iVar4,
                       (0x80000000U >> (LZCOUNT(iVar2 + -1) - 1U & 0xff)) * ((int)param_2 % 0x10),
                       (0x80000000U >> (LZCOUNT(iVar4 + -1) - 1U & 0xff)) *
                       ((int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1c)) >> 4),
                       *(undefined4 *)(param_1 + 0x3e0),*(undefined4 *)(param_1 + 0x3e4),
                       param_1 + (uint)*(byte *)(param_1 + 0x2b8) * 0x10 + 0x5c);
          *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
          return 1;
        }
        if (cVar1 != '\x02') {
          return 0;
        }
      }
      uVar7 = FUN_002b7498(param_1,param_2,&local_28,iVar5,iVar6,cVar1 == '\x02',0);
      return uVar7;
    }
  }
  return 0;
}
