// OoT3D decomp @ 003560d8  name=FUN_003560d8  size=180

void FUN_003560d8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  int local_28;
  
  FUN_0030ee14(&local_28,DAT_0035618c + param_1 * 4);
  fVar2 = DAT_00356198;
  iVar1 = DAT_00356190;
  uVar5 = 0;
  iVar6 = DAT_00356194 + param_1 * 0x20;
  do {
    if ((param_2 & 1 << (uVar5 & 0xff)) != 0) {
      puVar3 = (undefined *)(iVar6 + uVar5 * 2);
      *puVar3 = (char)param_3;
      fVar7 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = fVar7 * fVar2;
      if (*(char *)(iVar1 + 1) != '\0') {
        fVar8 = (float)VectorUnsignedToFloat((uint)(byte)puVar3[1],(byte)(in_fpscr >> 0x15) & 3);
        fVar7 = fVar8 * fVar2 * fVar7;
      }
      iVar4 = local_28;
      if (local_28 != 0) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        FUN_0030ed80(fVar7);
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x10);
  FUN_0030ede0(&local_28);
  return;
}

