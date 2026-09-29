// OoT3D decomp @ 002917b0  name=FUN_002917b0  size=404

void FUN_002917b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;

  FUN_00372d4c(DAT_0029194c,DAT_00291944,param_1 + 0xbc,DAT_00291948);
  FUN_00372f38(param_1,param_2,param_1 + 0x688,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,1,param_1 + 0x228,param_1 + 0x430,10);
  FUN_0035c358(param_1 + 0x68c,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  uVar8 = DAT_00291950;
  *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0xc4) = uVar8;
  FUN_0037572c(DAT_00291954,param_1);
  iVar1 = DAT_00291958;
  iVar5 = 0;
  iVar6 = DAT_00291958 + -0x20;
  iVar7 = DAT_00291958 + -0x18;
  do {
    puVar2 = (undefined4 *)(iVar1 + iVar5 * 0xc);
    iVar3 = z_actor_003738d0(*puVar2,puVar2[1],puVar2[2],param_2 + 0x208c,param_2,DAT_0029195c,0,0,0
                             ,1,1);
    if (iVar3 != 0) {
      pfVar4 = (float *)(iVar7 + iVar5 * 0xc);
      *(undefined4 *)(iVar3 + 0x674) = *(undefined4 *)(iVar6 + iVar5 * 4);
      uVar8 = VectorSignedToFloat((int)(short)(int)*pfVar4,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(iVar3 + 0x6bc) = uVar8;
      uVar8 = VectorSignedToFloat((int)(short)(int)pfVar4[1],(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(iVar3 + 0x6c0) = uVar8;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  fVar9 = (float)FUN_00371e50(DAT_00291960);
  *(short *)(DAT_00291964 + param_1) = (short)(int)fVar9;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined4 *)(param_1 + 0x638) = DAT_00291968;
  return;
}
