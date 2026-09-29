// OoT3D decomp @ 0028b048  name=FUN_0028b048  size=364

void FUN_0028b048(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float local_54 [2];
  float local_4c;
  undefined1 auStack_48 [48];

  (**(code **)(param_1 + 0x1bc))();
  if (*(int *)(param_1 + 0x1bc) == DAT_0028b1b4) {
    uVar1 = *(ushort *)(param_2 + 0x104);
    bVar4 = uVar1 == 4;
    if (bVar4) {
      uVar1 = (ushort)*(byte *)(param_1 + 3);
    }
    if ((((bVar4 && uVar1 == 0x15) && (iVar3 = *(int *)(DAT_0028b1b8 + param_2), iVar3 != 0)) &&
        (iVar2 = FUN_0040cbe8(iVar3,0), iVar2 != 0)) &&
       (iVar2 = FUN_00359690(param_2 + 0xa98,*(undefined1 *)(iVar3 + 0x81)), iVar2 == param_1)) {
      FUN_0034a80c(auStack_48,iVar2 + 0x148);
      FUN_003735ac(local_54,auStack_48,iVar3 + 0x28);
      fVar5 = *(float *)(DAT_0028b1bc + 4);
      if (((local_54[0] < fVar5) && (-fVar5 < local_54[0])) &&
         ((local_4c < fVar5 && (-fVar5 < local_4c)))) {
        *(ushort *)(iVar3 + 0x90) = *(ushort *)(iVar3 + 0x90) | 0x100;
      }
    }
  }
  fVar5 = DAT_0028b1c4;
  if (*(int *)(param_1 + 0x1bc) == DAT_0028b1c0) {
    FUN_00376864(param_1);
    FUN_00376340(fVar5,fVar5,fVar5,param_2,param_1,4);
  }
  if (*(float *)(param_1 + 0x1c4) <= fVar5) {
    return;
  }
  *(float *)(param_1 + 0x218) = *(float *)(DAT_0028b1c8 + 0x24) * *(float *)(param_1 + 0x1c4);
  FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1d4);
  return;
}
