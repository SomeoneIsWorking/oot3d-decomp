// OoT3D decomp @ 00483a9c  name=FUN_00483a9c  size=184

int FUN_00483a9c(byte *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar7;
  bool bVar8;
  byte *pbVar6;

  bVar8 = false;
  pbVar5 = param_1;
  do {
    pbVar6 = pbVar5;
    pbVar5 = pbVar6 + 1;
    uVar7 = (uint)*pbVar6;
    if (uVar7 == 0) break;
    piVar2 = (int *)FUN_002e5ba0();
  } while ((*(byte *)(*piVar2 + uVar7) & 1) != 0);
  if ((uVar7 != 0x2b) && (bVar8 = uVar7 == 0x2d, !bVar8)) {
    pbVar5 = pbVar6;
  }
  iVar3 = FUN_004885d0(pbVar5,param_2,param_3);
  if ((param_2 != (undefined4 *)0x0) && ((byte *)*param_2 == pbVar5)) {
    *param_2 = param_1;
  }
  if (bVar8) {
    iVar1 = -iVar3;
    bVar8 = iVar3 != 0;
    iVar3 = iVar1;
    if (bVar8 && -1 < iVar1) {
      puVar4 = (undefined4 *)FUN_002d0508();
      *puVar4 = 2;
      iVar3 = -0x80000000;
    }
  }
  else if (iVar3 < 0) {
    puVar4 = (undefined4 *)FUN_002d0508();
    *puVar4 = 2;
    iVar3 = 0x7fffffff;
  }
  return iVar3;
}
