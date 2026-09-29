// OoT3D decomp @ 001f8cc4  name=FUN_001f8cc4  size=644

void FUN_001f8cc4(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint in_fpscr;

  FUN_003510b0(param_1,DAT_001f8f48);
  puVar2 = DAT_001f8f50;
  *(undefined4 *)(param_1 + 0x460) = DAT_001f8f4c;
  *puVar2 = 0;
  *(undefined1 *)(param_1 + 0x464) = 0;
  *(undefined1 *)(param_1 + 0x465) = 0;
  *(undefined1 *)(param_1 + 0x466) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18;
  if ((((uVar1 == 3 || uVar1 == 5) || uVar1 == 7) || uVar1 == 8) || uVar1 == 9) {
    uVar4 = FUN_0036aa20(DAT_001f8f54,DAT_001f8f54,DAT_001f8f54,param_2 + 0x208c,param_1,param_2,
                         0x16f,0,0,0,0x23);
    *(undefined4 *)(param_1 + 0x458) = uVar4;
    puVar3 = DAT_001f8f5c;
    if (uVar1 == 5) {
      if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
         (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
         *(int *)(DAT_001f8f58 + param_2) != 0)) {
        param_2 = param_2 + 0x3a5c;
      }
      else {
        param_2 = 0;
      }
      if (((*DAT_001f8f5c & 1) == 0) && (iVar5 = FUN_003679b4(DAT_001f8f5c), iVar5 != 0)) {
        FUN_0036788c(DAT_001f8f60);
      }
      *(undefined4 *)(*(int *)(DAT_001f8f60 + 0x17c) + 8) = *(undefined4 *)(param_1 + 0x178);
      uVar4 = ObjectBankArchive_00358ef8(param_2 + 0x10,0x29);
      uVar1 = DAT_001f8f6c;
      iVar5 = 0;
      do {
        if (((*puVar3 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_001f8f5c), iVar6 != 0)) {
          FUN_0036788c(DAT_001f8f60);
        }
        uVar7 = (**(code **)(**(int **)(DAT_001f8f60 + 0x17c) + 8))
                          (*(int **)(DAT_001f8f60 + 0x17c),uVar4,1);
        iVar6 = param_1 + iVar5 * 4;
        *(undefined4 *)(iVar6 + 0x23c) = uVar7;
        FUN_0047d548(uVar7,2);
        uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x23c) + 0xc);
        uVar7 = FUN_00372f0c(param_2 + 0x10,4);
        FUN_00372d94(uVar8,uVar7);
        *(undefined1 *)(*(int *)(*(int *)(iVar6 + 0x23c) + 0xc) + 0x10) = 1;
        uVar7 = VectorSignedToFloat((uint)((ulonglong)uVar1 * 0x37 >> 0x25) * -0x3c + 0x37,
                                    (byte)(in_fpscr >> 0x15) & 3);
        iVar6 = *(int *)(*(int *)(iVar6 + 0x23c) + 0xc);
        if (*DAT_001f8f70 == 0) {
          *(undefined4 *)(iVar6 + 8) = uVar7;
          FUN_003586ec(iVar6,0,(int)((ulonglong)uVar1 * 0x37));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x14);
      if (((*puVar3 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_001f8f5c), iVar5 != 0)) {
        FUN_0036788c(DAT_001f8f60);
      }
      *(undefined4 *)(*(int *)(DAT_001f8f60 + 0x17c) + 8) = 0;
      *(undefined1 *)(param_1 + 0x19a) = 1;
    }
  }
  return;
}
