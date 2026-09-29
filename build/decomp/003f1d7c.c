// OoT3D decomp @ 003f1d7c  name=FUN_003f1d7c  size=580

void FUN_003f1d7c(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined1 auStack_400 [988];
  float local_24;
  uint local_20;
  float local_1c;

  pfVar8 = (float *)(DAT_003f1fc4 + (uint)(*(short *)(param_2 + 0x104) == 6) * 0x10);
  FUN_0036c5d8(param_1,&local_24,*(int *)(DAT_003f1fc0 + param_2) + 0x28);
  uVar1 = DAT_003f1fcc;
  *(bool *)(param_1 + 0x1a6) = DAT_003f1fc8 <= local_1c;
  local_1c = ABS(local_1c);
  if ((((local_20 < uVar1) && ((int)local_20 < (int)(uVar1 + 0x81000000))) &&
      ((int)ABS(local_24) < (int)(uVar1 + 0x80800000))) && (local_1c < *pfVar8)) {
    uVar1 = (uint)(*(ushort *)(param_1 + 0x1c) >> 10);
    iVar9 = param_2 + 0x500c;
    iVar7 = param_2 + 0x4c30;
    if (local_1c <= pfVar8[1]) {
      cVar2 = *(char *)(*(int *)(param_2 + 0x5b8c) +
                       uVar1 * 0x10 + (*(byte *)(param_1 + 0x1a6) ^ 1) * 2);
      *(char *)(param_1 + 3) = cVar2;
      if (*(char *)(param_2 + 0x500c) < '\0') {
        while (iVar9 = FUN_0033b6bc(param_2,iVar7,(int)*(char *)(param_1 + 3)), iVar9 == 0) {
          software_interrupt(10);
        }
        FUN_0033b608();
        uVar4 = 0xf;
      }
      else {
        iVar6 = (int)(short)(int)((DAT_003f1fd0 / (pfVar8[2] - pfVar8[3])) * (local_1c - pfVar8[3]))
        ;
        uVar3 = UnsignedSaturate(iVar6,8);
        UnsignedDoesSaturate(iVar6,8);
        *(short *)(param_1 + 0x1a4) = (short)uVar3;
        if (*(char *)(DAT_003f1fd4 + param_2) == cVar2) {
          return;
        }
        FUN_00371738(auStack_400,iVar7,0x3dc);
        FUN_00371738(iVar7,iVar9,0x3dc);
        FUN_00371738(iVar9,auStack_400,0x3dc);
        uVar4 = 1;
      }
      *(undefined1 *)(param_1 + 0x1b0) = uVar4;
      return;
    }
    uVar5 = (uint)*(char *)(param_2 + 0x500c);
    if (-1 < (int)uVar5) {
      uVar5 = (uint)*(byte *)(param_2 + 0x5401);
    }
    if (uVar5 == 0) {
      *(undefined1 *)(param_1 + 3) =
           *(undefined1 *)
            (*(int *)(param_2 + 0x5b8c) + uVar1 * 0x10 + (uint)*(byte *)(param_1 + 0x1a6) * 2);
      FUN_00371738(auStack_400,iVar7,0x3dc);
      FUN_00371738(iVar7,iVar9,0x3dc);
      FUN_00371738(iVar9,auStack_400,0x3dc);
      FUN_0036c520(param_2,iVar7);
    }
  }
  return;
}
