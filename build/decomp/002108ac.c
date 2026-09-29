// OoT3D decomp @ 002108ac  name=FUN_002108ac  size=340

void FUN_002108ac(int param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;

  uVar1 = DAT_00210a04;
  iVar6 = *(int *)(DAT_00210a00 + param_2);
  *(short *)(param_1 + 0x92c) = *(short *)(param_1 + 0x92c) + 1;
  sVar3 = *(short *)(param_1 + 0x92e);
  if (*(char *)(param_1 + 0x971) == '\0') {
    if (sVar3 == 0) {
      *(undefined1 *)(param_1 + 0x971) = 1;
    }
    else {
      *(short *)(param_1 + 0x92e) = sVar3 + -1;
    }
  }
  else {
    if (sVar3 == 0) {
      bVar2 = *(char *)(param_1 + 0x972) + 1;
      *(byte *)(param_1 + 0x972) = bVar2;
      if (bVar2 < 3) {
        *(undefined2 *)(param_1 + 0x92e) = 1;
        goto LAB_0021094c;
      }
      *(undefined1 *)(param_1 + 0x972) = 0;
      *(undefined1 *)(param_1 + 0x971) = 0;
      fVar7 = (float)FUN_00371e50(uVar1);
      sVar3 = (short)(int)fVar7 + 0x14;
    }
    else {
      sVar3 = sVar3 + -1;
    }
    *(short *)(param_1 + 0x92e) = sVar3;
  }
LAB_0021094c:
  (**(code **)(param_1 + 0x8a8))(param_1,param_2);
  uVar4 = *(undefined4 *)(iVar6 + 0x2c);
  uVar5 = *(undefined4 *)(iVar6 + 0x30);
  *(undefined4 *)(param_1 + 0x91c) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(param_1 + 0x920) = uVar4;
  *(undefined4 *)(param_1 + 0x924) = uVar5;
  uVar4 = DAT_00210a0c;
  if (*(int *)(DAT_00210a08 + 4) == 0) {
    uVar4 = DAT_00210a10;
  }
  *(undefined4 *)(param_1 + 0x918) = uVar4;
  FUN_0034c664(param_1,param_1 + 0x904,6,2);
  FUN_00370f5c(param_2,param_1 + 0x930,param_1 + 0x950,0x10);
  FUN_00370734(param_1 + 0x1a4);
  FUN_0037322c(uVar1,param_1);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x8ac);
  return;
}
