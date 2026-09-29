// OoT3D decomp @ 001c4b18  name=FUN_001c4b18  size=308

undefined4 FUN_001c4b18(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;

  fVar5 = DAT_001c4c6c;
  fVar2 = DAT_001c4c50;
  fVar4 = *(float *)(param_4 + 0x1e0);
  if (param_2 == 4 || param_2 == 9) {
    iVar3 = *(int *)(param_4 + 0x6a0);
    if (iVar3 == DAT_001c4c4c) {
      if (DAT_001c4c54 < (int)fVar4) {
        fVar5 = DAT_001c4c60;
        if (DAT_001c4c5c < (int)fVar4) {
          fVar5 = DAT_001c4c50 + (DAT_001c4c64 - fVar4) * DAT_001c4c58;
        }
      }
      else {
        fVar5 = DAT_001c4c50 + fVar4 * DAT_001c4c58;
      }
    }
    else if (iVar3 == DAT_001c4c68) {
      fVar4 = (float)FUN_003727f0(fVar4 * DAT_001c4c70);
      fVar5 = fVar2 - fVar4 * fVar5;
    }
    else if (iVar3 == DAT_001c4c74) {
      fVar4 = (float)FUN_00372674(fVar4 * DAT_001c4c78);
      fVar5 = fVar2 - fVar4 * fVar5;
    }
    else {
      iVar1 = DAT_001c4c7c;
      if (iVar3 != DAT_001c4c7c) {
        iVar1 = DAT_001c4c80;
      }
      fVar5 = DAT_001c4c50;
      if (iVar3 == DAT_001c4c7c || iVar3 == iVar1) {
        fVar5 = *(float *)(param_4 + 0x6a8);
      }
    }
    FUN_003705a0(fVar5,DAT_001c4c84,param_4 + 0x6a8);
    if (*(int *)(param_4 + 0x6a8) != 0x3f800000) {
      FUN_00371348(*(int *)(param_4 + 0x6a8),fVar2,fVar2,param_3,1);
    }
  }
  return 0;
}
