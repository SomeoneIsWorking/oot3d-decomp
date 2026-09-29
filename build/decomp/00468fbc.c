// OoT3D decomp @ 00468fbc  name=FUN_00468fbc  size=1444

undefined4 FUN_00468fbc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int iVar9;
  int iVar10;
  bool bVar11;

  FUN_002e71b4();
  if (((*DAT_00469560 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00469560), iVar2 != 0)) {
    FUN_0036788c(DAT_00469564);
  }
  uVar7 = *(uint *)(DAT_00469570 + 0xf3c);
  FUN_002e2424();
  iVar2 = 0;
  iVar10 = DAT_00469574 + uVar7 * 0x800;
  iVar9 = param_1 + 0x918;
  uVar8 = uVar7;
  while( true ) {
    iVar3 = param_1 + iVar2 * 0x10;
    bVar11 = *(int *)(iVar3 + 0x40c) != 0;
    if (bVar11) {
      uVar8 = (uint)*(byte *)(iVar3 + 0x414);
    }
    if (bVar11 && uVar8 != 0) {
      FUN_0034fc68();
    }
    *(undefined4 *)(iVar3 + 0x40c) = 0;
    *(undefined4 *)(iVar3 + 0x410) = 0;
    *(undefined1 *)(iVar3 + 0x414) = 0;
    iVar4 = FUN_00301300(iVar10 + iVar2 * 0x80,0,0);
    FUN_0031b9c0(iVar4,1);
    iVar5 = *(int *)(iVar4 + 4);
    *(int *)(iVar3 + 0x410) = iVar5;
    if (iVar5 == 0) break;
    iVar5 = thunk_FUN_0035010c(*(undefined4 *)(iVar3 + 0x410),0x9c00000);
    *(int *)(iVar3 + 0x40c) = iVar5;
    if (iVar5 == 0) break;
    uVar6 = FUN_00303ea8(iVar4);
    FUN_0034338c(*(undefined4 *)(iVar3 + 0x40c),uVar6,*(undefined4 *)(iVar3 + 0x410));
    FUN_00301260(iVar4);
    FUN_0031b99c(iVar4);
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar3 + 0x414) = 1;
    uVar8 = extraout_r1;
    if (0xe < iVar2) {
      FUN_002ff8e0(param_1 + 0x4f8,*(undefined4 *)(param_1 + 0x40c),0);
      iVar2 = 0;
      do {
        FUN_002ff8e0(param_1 + iVar2 * 0x54 + 0x5a0,*(undefined4 *)(param_1 + iVar2 * 0x10 + 0x41c),
                     0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 9);
      iVar2 = 0;
LAB_00469230:
      *(int *)(param_1 + iVar2 * 4 + 0x8e8) = param_1 + iVar2 * 0x54 + 0x4f8;
LAB_0046924c:
      uVar8 = DAT_00469578;
      iVar2 = iVar2 + 1;
      if (iVar2 < 0xc) {
        if (iVar2 != 1) {
          if (iVar2 == 0xb) {
            uVar6 = FUN_002e11d0(0xd);
            *(undefined4 *)(param_1 + 0x914) = uVar6;
            goto LAB_0046924c;
          }
          goto LAB_00469230;
        }
        uVar6 = FUN_002e11d0(0);
        *(undefined4 *)(param_1 + 0x8ec) = uVar6;
        goto LAB_0046924c;
      }
      iVar2 = 0;
      do {
        iVar4 = param_1 + iVar2 * 4;
        iVar3 = param_1 + iVar2 * 0x18;
        iVar10 = FUN_0048073c(iVar3 + 100,0x18,uVar7,
                              (uint)((ulonglong)(uint)(*(int *)(iVar4 + 0x40) * 1000) *
                                     (ulonglong)uVar8 >> 0x24));
        *(undefined2 *)(iVar3 + iVar10 * 2 + 100) = 0;
        *(int *)(iVar4 + 0x364) = iVar3 + 100;
        iVar10 = FUN_0034405c(iVar3 + 0x1e4,0x18,uVar7,*(undefined4 *)(iVar4 + 0x1c));
        iVar2 = iVar2 + 1;
        *(undefined2 *)(iVar3 + iVar10 * 2 + 0x1e4) = 0;
        *(int *)(iVar4 + 0x3a4) = iVar3 + 0x1e4;
      } while (iVar2 < 9);
      FUN_002db998(iVar9,param_1 + 0x8e8,0xc,*(undefined4 *)(param_1 + 0x4ac),
                   *(undefined4 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4bc),
                   *(undefined4 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4cc),
                   *(undefined4 *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x4dc),
                   *(undefined4 *)(param_1 + 0x4e0),param_1 + 0x364,0x20,0);
      iVar2 = DAT_00469580;
      uVar6 = DAT_0046957c;
      uVar8 = 0;
      do {
        iVar10 = param_1 + uVar8 * 0x1c;
        *(uint *)(iVar10 + 0x1764) = uVar8 * 5 + 10;
        *(undefined4 *)(iVar10 + 0x1768) = 0x46;
        *(undefined4 *)(iVar10 + 0x176c) = uVar6;
        *(int *)(iVar10 + 0x175c) = param_1;
        *(uint *)(iVar10 + 0x1760) = uVar8;
        *(undefined1 *)(iVar10 + 0x1772) = 1;
        *(undefined1 *)(iVar10 + 6000) = 1;
        FUN_002fd3e4(iVar10 + 0x1758,0);
        *(undefined1 *)(iVar10 + 0x1771) = 1;
        *(undefined1 *)(iVar10 + 0x1772) = 1;
        if ((int)uVar8 < 3) {
          uVar7 = *(uint *)(iVar2 + 0xbc) & 0x40000 << (uVar8 & 0xff);
joined_r0x004693d4:
          bVar11 = false;
          if (uVar7 != 0) {
            bVar11 = true;
          }
        }
        else {
          if ((int)uVar8 < 8) {
            uVar7 = *(uint *)(iVar2 + 0xbc) &
                    1 << (*(uint *)(DAT_00469584 + uVar8 * 4 + -0xc) & 0xff);
            goto joined_r0x004693d4;
          }
          iVar3 = 0;
          do {
            iVar4 = param_1 + iVar3 * 4;
            bVar11 = *(int *)(iVar4 + 0x1c) != 0;
            if (bVar11) {
              iVar4 = *(int *)(iVar4 + 0x20);
            }
            if (!bVar11 || iVar4 == 0) {
              bVar11 = false;
              goto LAB_0046940c;
            }
            iVar3 = iVar3 + 2;
          } while (iVar3 < 8);
          bVar11 = true;
        }
LAB_0046940c:
        *(bool *)(iVar10 + 0x1772) = bVar11;
        if (!bVar11) {
          FUN_002fd360();
        }
        uVar8 = uVar8 + 1;
        if (8 < (int)uVar8) {
          *(undefined4 *)(param_1 + 0x185c) = 9;
          *(undefined4 *)(param_1 + 0x1860) = 0x37;
          uVar1 = DAT_00469588;
          *(int *)(param_1 + 0x1858) = param_1;
          *(undefined4 *)(param_1 + 0x1864) = 0x4b;
          *(undefined4 *)(param_1 + 0x1868) = uVar1;
          *(undefined1 *)(param_1 + 0x186e) = 1;
          *(undefined1 *)(param_1 + 0x186c) = 1;
          FUN_002fd3e4(param_1 + 0x1854,0);
          *(undefined1 *)(param_1 + 0x186d) = 1;
          *(undefined1 *)(param_1 + 0x186e) = 1;
          *(undefined4 *)(param_1 + 0x1878) = 10;
          *(undefined4 *)(param_1 + 0x187c) = 0x3c;
          *(undefined4 *)(param_1 + 0x1880) = 0x50;
          *(undefined4 *)(param_1 + 0x1884) = uVar6;
          *(int *)(param_1 + 0x1874) = param_1;
          *(undefined1 *)(param_1 + 0x188a) = 1;
          *(undefined1 *)(param_1 + 0x1888) = 1;
          FUN_002fd3e4(param_1 + 0x1870,0);
          *(undefined1 *)(param_1 + 0x1889) = 1;
          *(undefined1 *)(param_1 + 0x188a) = 1;
          *(undefined4 *)(param_1 + 0x1894) = 0xb;
          *(undefined4 *)(param_1 + 0x1898) = 0x41;
          *(undefined4 *)(param_1 + 0x189c) = 0x50;
          *(int *)(param_1 + 0x1890) = param_1;
          *(undefined4 *)(param_1 + 0x18a0) = uVar1;
          *(undefined1 *)(param_1 + 0x18a6) = 1;
          *(undefined1 *)(param_1 + 0x18a4) = 1;
          FUN_002fd3e4(param_1 + 0x188c,0);
          *(undefined1 *)(param_1 + 0x18a5) = 1;
          *(undefined1 *)(param_1 + 0x18a6) = 1;
          uVar8 = DAT_0046958c;
          *(undefined4 *)(param_1 + 0x18a8) = *(undefined4 *)(param_1 + 0x4ec);
          *(uint *)(param_1 + 0x18ac) =
               (uint)((ulonglong)*(uint *)(param_1 + 0x4f0) * (ulonglong)uVar8 >> 0x27);
          iVar2 = 0;
          do {
            iVar3 = iVar9 + iVar2 * 4;
            iVar2 = iVar2 + 1;
            iVar10 = *(int *)(iVar3 + 0x418);
            if (iVar10 != 0) {
              *(undefined1 *)(iVar10 + 0x6c) = 0;
            }
            iVar10 = *(int *)(iVar3 + 0x818);
            if (iVar10 != 0) {
              *(undefined1 *)(iVar10 + 0x6c) = 0;
            }
          } while (iVar2 < 0x100);
          *(undefined1 *)(param_1 + 8) = 0;
          *(undefined1 *)(param_1 + 0xc) = 0;
          *(undefined1 *)(param_1 + 10) = 1;
          *(undefined4 *)(param_1 + 0x3e4) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x19) = 0;
          return 1;
        }
      } while( true );
    }
  }
  FUN_00301260(iVar4);
  FUN_0031b99c(iVar4);
  FUN_002e68ac(iVar9);
  iVar2 = 0;
  do {
    FUN_003445a8(param_1 + iVar2 * 0x54 + 0x4f8);
    do {
      iVar2 = iVar2 + 1;
      if (0xb < iVar2) {
        iVar2 = 0;
        uVar8 = extraout_r1_00;
        do {
          iVar9 = param_1 + iVar2 * 0x10;
          bVar11 = *(int *)(iVar9 + 0x40c) != 0;
          if (bVar11) {
            uVar8 = (uint)*(byte *)(iVar9 + 0x414);
          }
          if (bVar11 && uVar8 != 0) {
            FUN_0034fc68();
            uVar8 = extraout_r1_01;
          }
          *(undefined4 *)(iVar9 + 0x40c) = 0;
          iVar2 = iVar2 + 1;
          *(undefined4 *)(iVar9 + 0x410) = 0;
          *(undefined1 *)(iVar9 + 0x414) = 0;
        } while (iVar2 < 0xf);
        *(undefined1 *)(param_1 + 10) = 0;
        return 0;
      }
    } while (iVar2 == 1 || iVar2 == 0xb);
  } while( true );
}
