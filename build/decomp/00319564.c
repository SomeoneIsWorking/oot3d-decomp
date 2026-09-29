// OoT3D decomp @ 00319564  name=FUN_00319564  size=408

void FUN_00319564(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  puVar6 = (ushort *)0x0;
  iVar4 = FUN_0037571c(param_2);
  iVar1 = DAT_003196fc;
  if (iVar4 != 0) {
    puVar6 = *(ushort **)(&DAT_000022dc + param_2);
  }
  if (puVar6 == (ushort *)0x0) {
    return;
  }
  uVar8 = (uint)*puVar6;
  if (uVar8 == *(uint *)(DAT_003196fc + 0x18)) {
    return;
  }
  uVar5 = DAT_00319714;
  if (uVar8 != 2) {
    if (uVar8 != 3) goto LAB_003196d0;
    iVar7 = 0;
    iVar4 = FUN_0037571c(param_2);
    puVar3 = DAT_00319704;
    puVar2 = DAT_00319700;
    if (iVar4 != 0) {
      iVar7 = *(int *)(&DAT_000022dc + param_2);
    }
    if (iVar7 == 0) goto LAB_003196d0;
    local_24 = VectorSignedToFloat(*(undefined4 *)(iVar7 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    local_20 = VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    local_1c = VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00332988(param_2,&local_24,(int)(short)*DAT_00319704,500,(int)(short)*DAT_00319700,0x28);
    FUN_00332988(param_2,&local_24,(int)(short)puVar3[1],500,(int)(short)puVar2[1],0x28);
    FUN_00332988(param_2,&local_24,(int)(short)puVar3[2],500,(int)(short)puVar2[2],0x28);
    local_30 = local_24;
    uStack_2c = local_20;
    uStack_28 = local_1c;
    FUN_0036e670(param_2,&local_30,0,0,0,0);
    uVar5 = DAT_00319710;
  }
  FUN_0037547c(uVar5,0,4,DAT_0031970c,DAT_0031970c,DAT_00319708);
LAB_003196d0:
  *(uint *)(iVar1 + 0x18) = uVar8;
  return;
}
