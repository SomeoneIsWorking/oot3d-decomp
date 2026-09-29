// OoT3D decomp @ 00371478  name=FUN_00371478  size=324

byte * FUN_00371478(undefined4 *param_1,uint param_2)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  bool bVar9;

  puVar1 = DAT_003715c0;
  pbVar2 = (byte *)(param_1 + 1);
  iVar5 = 0;
  while( true ) {
    uVar6 = (uint)*pbVar2;
    bVar9 = uVar6 == 2;
    if (bVar9) {
      uVar6 = (uint)(char)pbVar2[1];
    }
    if (bVar9 && uVar6 == param_2) break;
    iVar5 = iVar5 + 1;
    pbVar2 = pbVar2 + 0xa0;
    if (199 < iVar5) {
      pbVar2 = (byte *)(param_1 + 1);
      iVar5 = 0;
      do {
        if (*pbVar2 == 0) {
          uVar8 = *param_1;
          iVar5 = *(int *)(DAT_003715bc + (int)param_1);
          *pbVar2 = 1;
          pbVar2[1] = (byte)param_2;
          if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_003715c0), iVar3 != 0)) {
            FUN_0036788c(DAT_003715c4);
          }
          piVar7 = *(int **)(DAT_003715c4 + 0x17c);
          piVar7[2] = iVar5;
          uVar4 = ObjectBankArchive_00358ef8(uVar8,param_2);
          uVar4 = (**(code **)(*piVar7 + 8))(piVar7,uVar4,1);
          *(undefined4 *)(pbVar2 + 4) = uVar4;
          piVar7[2] = 0;
          if (param_2 == 0xb) {
            uVar4 = *(undefined4 *)(*(int *)(pbVar2 + 4) + 0x10);
            uVar8 = FUN_00372f0c(uVar8,2);
            *(undefined4 *)(pbVar2 + 8) = uVar4;
            FUN_00372d94(pbVar2 + 8,uVar8);
          }
          return pbVar2;
        }
        iVar5 = iVar5 + 1;
        pbVar2 = pbVar2 + 0xa0;
      } while (iVar5 < 200);
      return (byte *)0x0;
    }
  }
  *pbVar2 = 1;
  return pbVar2;
}
