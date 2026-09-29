// OoT3D decomp @ 001aafe4  name=FUN_001aafe4  size=1176

void FUN_001aafe4(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;

  fVar2 = DAT_001ab340;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 6) {
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * DAT_001ab340;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar2;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar2;
    FUN_003430fc(param_1,param_2,4,5,0);
    FUN_00372f38(param_1,param_2,param_1 + 0x210,4,0);
    return;
  }
  if (sVar1 < 7) {
    if (sVar1 == 0) {
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * DAT_001ab340;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar2;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar2;
      FUN_003430fc(param_1,param_2,0,1,0);
      *(undefined4 *)(DAT_001ab344 + 4) = 0;
      uVar4 = FUN_00372f38(param_1,param_2,param_1 + 0x200,0,param_1 + 0x204,1,0);
      uVar4 = FUN_00372f0c(uVar4,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x204) + 0xc),uVar4);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x204) + 0xc) + 0x10) = 1;
      return;
    }
    if (sVar1 == 1) {
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * DAT_001ab340;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar2;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar2;
      if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
         (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
         *(int *)(DAT_001ab348 + iVar3) != 0)) {
        iVar3 = iVar3 + 0x3a5c;
      }
      else {
        iVar3 = 0;
      }
      uVar4 = FUN_003532c0(iVar3 + 0x10,0);
      FUN_003430fc(param_1,param_2,1,2,uVar4);
      uVar4 = FUN_00372f38(param_1,param_2,param_1 + 0x208,2,0);
      uVar4 = FUN_00372f0c(uVar4,1);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0xc),uVar4);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x208) + 0xc) + 0x10) = 0;
      return;
    }
    if (sVar1 == 2) {
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * DAT_001ab340;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar2;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar2;
      if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
         (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
         *(int *)(DAT_001ab348 + iVar3) != 0)) {
        iVar3 = iVar3 + 0x3a5c;
      }
      else {
        iVar3 = 0;
      }
      uVar4 = FUN_003532c0(iVar3 + 0x10,1);
      FUN_003430fc(param_1,param_2,2,3,uVar4);
      uVar4 = FUN_00372f38(param_1,param_2,param_1 + 0x20c,3,0);
      uVar4 = FUN_00372f0c(uVar4,2);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x20c) + 0xc),uVar4);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20c) + 0xc) + 0x10) = 0;
      return;
    }
    if (sVar1 == 5) {
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * DAT_001ab340;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar2;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar2;
      FUN_003430fc(param_1,param_2,3,4,0);
      FUN_00372f38(param_1,param_2,param_1 + 0x210,4,0);
      return;
    }
  }
  else {
    if (sVar1 == 7) {
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * DAT_001ab340;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar2;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar2;
      FUN_003430fc(param_1,param_2,5,6,0);
      FUN_00372f38(param_1,param_2,param_1 + 0x210,4,0);
      return;
    }
    if (sVar1 == 0x17) {
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * DAT_001ab340;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar2;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar2;
      FUN_003430fc(param_1,param_2,6,7,0);
      FUN_00372f38(param_1,param_2,param_1 + 0x214,5,0);
      return;
    }
    if (sVar1 == 0x18) {
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * DAT_001ab340;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar2;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar2;
      FUN_003430fc(param_1,param_2,7,8,0);
      FUN_00372f38(param_1,param_2,param_1 + 0x218,6,0);
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
