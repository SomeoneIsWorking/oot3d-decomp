// OoT3D decomp @ 0015b794  name=FUN_0015b794  size=340

void FUN_0015b794(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;

  psVar5 = (short *)(DAT_0015b8e8 + ((int)*(short *)(param_1 + 0x1c) >> 8) * 0x14);
  iVar2 = param_2 + 0x3a58;
  uVar3 = FUN_00363c10(iVar2,(int)*psVar5,param_3,param_4,param_4);
  uVar1 = FUN_00363c10(iVar2,(int)psVar5[1]);
  *(undefined1 *)(param_1 + 0x45c) = uVar1;
  iVar4 = FUN_00373074(iVar2,uVar3);
  if ((iVar4 != 0) &&
     (iVar2 = FUN_00373074(iVar2,(int)*(char *)(DAT_0015b8ec + param_1)), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x466) = 1;
    *(char *)(param_1 + 0x1e) = (char)uVar3;
    fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)(psVar5 + 2),(byte)(in_fpscr >> 0x15) & 3);
    FUN_0037572c(fVar6 * DAT_0015b8f0,param_1,param_1);
    uVar7 = VectorUnsignedToFloat((uint)*(byte *)((int)psVar5 + 7),(byte)(in_fpscr >> 0x15) & 3);
    uVar3 = VectorSignedToFloat((short)*(char *)((int)psVar5 + 5) * 100,(byte)(in_fpscr >> 0x15) & 3
                               );
    FUN_00372d4c(uVar3,uVar7,param_1 + 0xbc,
                 *(undefined4 *)(DAT_0015b8f4 + (uint)*(byte *)(psVar5 + 3) * 4));
    *(char *)(param_1 + 0x45d) = (char)psVar5[4];
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_0015b8f8 + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    (**(code **)(DAT_0015b8fc + (uint)*(byte *)(param_1 + 0x45d) * 4))
              (param_1,param_2,iVar2 + 0x10,*(undefined4 *)(psVar5 + 6),*(undefined4 *)(psVar5 + 8))
    ;
    *(undefined4 *)(param_1 + 0x460) = DAT_0015b900;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffbf;
  return;
}
